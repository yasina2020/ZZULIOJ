
typedef struct{
    char *ch;
    int length;
} Str;

//暴力算法

int naive (Str str,Str substr){
    int i = 1 ,j = 1 ,k = i;//i指向主串位置，j指向子串位置，
                            //从 1 开始，下标0不存储东西
    while(i <= str.length && j <= substr.length){
        if(str.ch[i] == substr.ch[i]){
            i ++ ;j ++;
        }else{
            j = 1;
            i = ++k;//k自加1后赋值 i，代表下次开始匹配的位置
        }
    }
    if(j > substr.length)
        return k;
    else
        return 0;
}


//KMP
/*
模式串中第j个位置与主串中第i个位置发生不匹配时，应从
模式串中第next[i]个位置与主串第i个位置重新开始比较。

next[1]为0，为特殊标记，表示应从模式串第一个字符与
主串当前不匹配字符的下一个字符开始比较;
next[j]的值为  FL或FR  串长+1，
若F中有多对“FL和FR”则取最长的那一对。

*/
void get_next(Str substr, int next[]){
    int j = 1, t = 0;
    next[1] = 0;//特殊标记，当j = next[j] = 0时，就 i++
    while(j < substr.length){
        if(t == 0 || substr.ch[j] == substr.ch[t]){
            next[j+1] = t + 1;
            t ++;
            j ++;
        }else{
            t = next[t];
        }
    }
}

int KMP (Str str,Str substr,int next[]){
    int i = 1 ,j = 1 ;//i指向主串位置，j指向子串位置，
                            //从 1 开始，下标0不存储东西
    while(i <= str.length && j <= substr.length){
        if(j == 0 || str.ch[i] == substr.ch[i]){
            i ++ ;j ++;/*1匹配时，比较下一个
                       2当 j = next[j] = 0时，挪动 i的位置*/
        }else{
            j = next[j];/*利用next[]匹配，不需要挪动i的位置，只挪动j指的位置
                        而next[]中存储的就是不匹配时，j要挪动的位置*/
        }
    }
    if(j > substr.length)
        return i - substr.length;
    else
        return 0;
}


//KMP优化---改进next数组

void get_nextval(Str substr,int nextval[]){
    int j = 1, t = 0;
    nextval[1] = 0;
    while(j < substr.length){
        if(t == 0 || substr.ch[j] == substr.ch[t]){
            next[j+1] = t + 1;
            if(substr.ch[j+1] != substr.ch[t+1])
                nextval[j+1] = t+1;
            else
                nextval[j+1] = nextval[t+1];
            t ++;
            j ++;
        }else{
            t = nextval[t];
        }
    }
}



