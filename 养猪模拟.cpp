using namespace std;
#include <iostream>
//���ȫ�ֱ���
int samount,bwamount,bamount; //ȥ��¼��ǰ��Ȧ����������� 
struct pig{
	int spiece;//spiece=1Ϊ����spiece=2��С����spiece=3�Ǵ���
	double weight;
	int days=0;
	int number=0;
	pig *next; 
};
class pigcircle{
	private:
		int sum=0;//��¼��Ȧ�������
		pig *head=0;//һ����Ȧ�������ͷָ��
		int ifblack=0; //����Ǻ���Ȧ��ifblack=1
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
	ifblack=0;//δ��ע�Ǻ�����ֵĬ��Ϊ0 
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
	return -1//-1��ʾ�������ų�������Ȧ���������
	else
	return p->spiece;
}
int pigcircle::searchdate(int i)
{
	int j=0;
	for(;j<i&&p!=null;j++)
	p=p->next;
	if(p==null)
	return -1;//ͬ��
	else
	return days;
}
int pigcircle::searchweight(int i)
{
	int j=0;
	for(;j<i&&p!=null;j++)
	p=p->next;
	if(p==null)
	return -1;//ͬ��
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
 //����������У�������ͳ��һ����Ȧ�����Ʒ�ֺ�������
 //���õ����������ݽ�������ȫ�ֱ����У������ز�ͬ�Ķ�Ӧֵ 
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
 }//���Ϊ���Ӻ�����Ŀ�����ڸı䵱ǰ��Ȧÿһֻ�������������
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
		return 1;//��ʾ���뵱ǰ��Ȧ�ɹ��� 
		} 
		else 
		return 0;//����ʧ�� 
	}
	else
	{
		if(head==null||sum<10&&ifblack==0)
		{
			p->next=head;
			head=p;
			return 1;//��ʾ���뵱ǰ��Ȧ�ɹ� 
		}
		else 
		return 0;//����ʧ�� 
	}
}
int pigcircle::insert(pig *p)
{
	if(sum==10) return 0;//������ԭ���Ļ����ϲ�������
	if(ifblack!=p->spiece) return 0;//ͬ��
	if(p==null)
	head=p;
	else
	{
		p->next=head;
		head=p;
	}
	return 1;//����ɹ� 
}
 //������������棬��������¼��Ȧ�����ֵ���٣���ʵ�ֳ�Ȧ�����������ɾ����
 //������ʱ��������Ȧ����Ĵ�����ʼ������������д���
//������ʼ��
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
