vector

构造方式{

    int myArr[]={1,2,3,4,5};

    vector<int> myVector;  //  空

    vector<int> myVector2(myArr,myArr + 5);//1 2 3 4 5  拷贝数组myArr从下标0开始5个

    vector<int> myVector3(5,2);//2 2 2 2 2         5个2

    vector<int> myVector4(myVector2);//1 2 3 4 5    拷贝myVector2

    vector<int> myVector5(myVector4.begin(),myVector4.begin() + 3);//1 2 3拷贝myvector4.begin开始3个
                                                                    //myVector.endd到结尾

}



输出
for(int i=0;i<myVector.size();i++){
    printf("%d ",myVector[i]);
}


函数使用{

    int myArray[] = {1, 2, 3, 4, 5};
    vector<int> myVector(myArray, myArray + 5); //1, 2, 3, 4, 5

    //大小
    int n = myVector.size();     //n= 5

    //弹出末尾
    myVector. pop_back();       //1, 2, 3, 4

    //把6推入末尾
    myVector. push_back(6);         //1,2,3,4,6

    //在myVector.begin() + 1位置插入9
    myVector. insert( myVector.begin() + 1, 9); //1, 9, 2, 3, 4, 6

    //在myVector.begin() 位置 插入 3 个 7
    myVector. insert( myVector. begin(), 3, 7); //7, 7, 7, 1, 9, 2, 3, 4, 6

    //在myVector.begin() 位置 插入myArray到myArray + 2一段区间
    myVector. insert( myVector. begin(), myArray, myArray + 2); // 1, 2, 7, 7, 7, 1, 9, 2, 3, 4, 6

    //删除第6个元素
    myVector. erase( myVector.begin() + 6);   //1,2,7,7,7,1,2,3,4,6

    //删除一段区间
    myVector . erase( myVector.begin() + 1, myVector.begin() + 3); // 1, 7, 7, 1, 2, 3, 4

    //清空
    myVector.clear(); //

}



