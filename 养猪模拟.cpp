using namespace std;
#include <iostream>
//添加全局变量
int samount,bwamount,bamount; //去记录当前猪圈何种猪的数量 
struct pig{
	int spiece;//spiece=1为黑猪，spiece=2是小猪，是spiece=3是大花猪
	double weight;
	int days=0;
	int number=0;
	pig *next; 
};
class pigcircle{
	private:
		int sum=0;//记录猪圈猪的总数
		pig *head=0;//一个猪圈猪链表的头指针
		int ifblack=0; //如果是黑猪圈则，ifblack=1
	public:
		pigcircle();
		int searchweight(int i);
		int searchdate(int i);
		int searchspiece(int i);
		int pigcirclestatistics();
		void uppig() ;
	    int  price();
	    int insert(pig *p);
		void initialaddpig(pig *p);
}pc[101];
pigcircle::pigcircle()
{
	sum=0;
	head=null;
	ifblack=0;//未标注是黑猪，该值默认为0 
}
int pigcircle::searchspiece(int i)
{
	int j=0;
	pig *p=head 
	for(;j<i&&p!=null;j++)
	{
		p=p->next 
	}
	if(p==return)
	return -1//-1表示这个猪序号超过了猪圈内猪的数量
	else
	return p->spiece;
}
int pigcircle::searchdate(int i)
{
	int j=0;
	for(;j<i&&p!=null;j++)
	p=p->next;
	if(p==null)
	return -1;//同上
	else
	return days;
}
int pigcircle::searchweight(int i)
{
	int j=0;
	for(;j<i&&p!=null;j++)
	p=p->next;
	if(p==null)
	return -1;//同上
	else
	return weight; 
}
int pigcircle::pigcirclestatistics()
{
	int j;
	bamount=samount=bwamount=0;
	if(ifblack==1)
	{
		bamount=sum;
		return 1;
	}
	else if
	{
		while(p)
		{
			if(p->spiece==2)
			samount+=1
			else
			bwamount+=1;
		}
		return 2;
	}
}
 //在这个函数中，我们来统计一个猪圈中猪的品种和数量，
 //将得到的数量传递进入三个全局变量中，并返回不同的对应值 
void pigcircle::uppig()
{
	pig *p=head;
	srand((unsigned)time(Null));
	while(p)
	{
		p->weight=(double)(rand()%12)/10;
		p->days+=1;
		p=p->next;
	}
 }//这个为增加函数，目的在于改变当前猪圈每一只猪的重量与天数
 int pigcircle::price()
 {
 	int sumprice=0;
 	pig *p=head,*p1;
 	while(p)
 	{
 		if(p->weight>75||p->days>360)
 		{
 		  if(p->spiece==1)
		   	sumprice+=p->weight*15;
		   else if(p->spiece==2)
		   sumprice+=p->weight*7;
		   else
		   sumprice+=p->weight*6;
		   p1->next=p->next;
		   p=p->next;
		   delete p;
		}
		 p1=p;
		 p=p->next;
	 }
 }
int pigcircle::initialaddpig(pig *p)
{
	if(p->spiece==1)
	{
		if(head==null||sum<10&&ifblack==1)
		{
		p->next=head;
		head=p;
		return 1;//表示加入当前猪圈成功； 
		} 
		else 
		return 0;//加入失败 
	}
	else
	{
		if(head==null||sum<10&&ifblack==0)
		{
			p->next=head;
			head=p;
			return 1;//表示加入当前猪圈成功 
		}
		else 
		return 0;//加入失败 
	}
}
int pigcircle::insert(pig *p)
{
	if(sum==10) return 0;//不能再原来的基础上插入新猪
	if(ifblack!=p->spiece) return 0;//同上
	if(p==null)
	head=p;
	else
	{
		p->next=head;
		head=p;
	}
	return 1;//插入成功 
}
 //在这个函数里面，我们来记录出圈的猪价值多少，并实现出圈的猪从链表中删除；
 //我们暂时结束对猪圈和猪的处理，开始对整体的猪场进行处理
//对猪场初始化
void initial(pigcircle pc[])
{
	int count=200;
	int i,flag;
	srand
	pig *p;
	srand((unsigned)time(Null));
	while(count--)
{
	p=new pig;
	p->spiece=rand()%3+1;
	p->weight=rand()%30+20;
	p->days=0;
	for(i=1;i<=100;i++)
	{
	flag=p[i].add(p);
	if(flag==1) 
	{
		delete p;
		break;
	}
	else continue;
    }
    if(p!=0)
    delete p;
 } 
 //
