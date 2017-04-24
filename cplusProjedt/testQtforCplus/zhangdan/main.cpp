#include <iostream>

using namespace std;
struct zhanghu{
    double jin_e;
    double li_lv;//7 days
    double shou_xu_fei;//mai ru he mai chu
   double ying_li;//xiang dui yu yue bao
   double yu_e;
}yu_e_bao;
double yingli (zhanghu & cur_zhanghu){
    return cur_zhanghu.jin_e*(cur_zhanghu.li_lv-cur_zhanghu.shou_xu_fei)/100-cur_zhanghu.jin_e*yu_e_bao.li_lv/100;
};
double yue (zhanghu & cur_zhanghu){
    return cur_zhanghu.jin_e*(100+cur_zhanghu.li_lv-cur_zhanghu.shou_xu_fei)/100-cur_zhanghu.jin_e*yu_e_bao.li_lv/100;
};
int main()
{
    cout << "Hello World!" << endl;
    cout<<"This is my ZhangDan ."<<endl;
    cout<<"It will cotain two part : 1.Xiaofei ;2.LiCai .Which will be start first? "<<endl;
    cout<<"please enter 1 or 2 ,then enter ";
    int choose_num;
    cin>>choose_num;
    switch (choose_num)
    {
    case 1:cout<<"Now let's make up the XiaoFei "<<endl;break;
    case 2:cout<<"Now let's make up the LiCai "<<endl;break;
       default :cout<<"You type a wrong order "<<endl;break;
    }
  yu_e_bao.li_lv=0.06;
zhanghu huaxiawanggou;
huaxiawanggou.jin_e=1000;
huaxiawanggou.li_lv=-0.3;
huaxiawanggou.shou_xu_fei=1.5;
huaxiawanggou.yu_e=yue(huaxiawanggou);
cout<<"huaxiawanggou.yue :"<<huaxiawanggou.yu_e<<endl;
huaxiawanggou.ying_li=yingli(huaxiawanggou);
cout<<"huaxiawanggou.yingli :"<<huaxiawanggou.ying_li<<endl;
    return 0;
}

