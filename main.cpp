#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
int t=0;
struct capitalist{
    int out;//the production of the capitalist's company
    int name;//the name of the capitalist
    int s[3];//the number of every substances the capitalist possess;
    int d[3];//the consume of every substance for the capitalist
    int p[3];//the price which the capitalist make for every substance
    int o[3];//export
    bool flag;//live or die
};
void init(capitalist* a){

}
void consume(capitalist* a,int i){

}
void trade(capitalist* a,int i){

}
void make_price(capitalist* a,int i){

}
void refreash(){
    
}
int main(){
    int t_max=0;
    scanf("%d",&t_max);
    capitalist person[3];
    person[0].name=0;
    person[1].name=1;
    person[2].name=2;
    init(person);
    for(int i=1;i<=t_max;i++){
        for(int j=0;j<=2;j++){
            consume(person,i);
            trade(person,i);
            make_price(person,i);
        }
        refresh();
    }
    return 0;
}