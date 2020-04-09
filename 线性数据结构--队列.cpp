先进先出
队尾入 队首出

queue.定义{
    #include <queue>;
    queue<int > myQueue;
}

queue.入队{
    for(int i=0; i<0;i++){
        myQueue.push(i)//i入队
    }

}

queue.出队{
    myQueue.pop();
    //弹出队首
}

queue.判空{
    while(!myQueue.empty())

}

queue.访问队首{
    int sum = myQueue.front();
    //访问并不会弹出队首
}
