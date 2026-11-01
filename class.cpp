#include <iostream>
#include <cstring>
using namespace std;
class MyClass{
private:
    int*data;
public:
    MyClass(int val){
        data=new int(val);
        cout<<"构造函数：分配了内存，值="<<*data<<endl;
    }
    MyClass(const MyClass&other){
        data=new int(*(other.data));
        cout<<"深拷贝构造函数：重新分配了内存，值="<<*data<<endl;

    }
    ~MyClass(){
        delete data;
        cout<<"析构函数：内存已释放"<<endl;
    }
    void setVal(int val){
        *data=val;
    }
    void print(){
        cout<<"当前值："<<*data<<endl;
    }
};
int main(){
    cout<<"---创建 stu1 ---"<<endl;
    MyClass stu1(10);
    cout<<"\n---用stu1拷贝创建stu2---"<<endl;
    MyClass stu2=stu1;
    cout<<"\n---修改stu2的值，看看会不会影响 stu1---";
    stu2.setVal(99);
    cout<<"stu1的值：";stu1.print();
    cout<<"stu2的值：";stu2.print();
    cout<<"\n---程序结束，开始销毁对象---"<<endl;
    return 0;
}