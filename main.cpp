/*to do:
    init destructor
    gaussian_distribution
*/
#include<iostream>
#include<cmath>

int time;

struct capitalist{
    int out;//the production of the capitalist's company
    int name;//the name of the capitalist
    int storage[3];//the number of every substances the capitalist possess;
    int consumption[3];//the consume of every substance for the capitalist
    int price[3];//the price which the capitalist make for every substance
    int o[3];//export (?)
    bool is_alive;//live or die
	float sigma,consuming_desire;
    //add a init destructor
};

int gaussian_distribution(int mu,int sigma/*,float possibility*/) {
	//erfc is integral (Cumulative Distribution) of normal distribution
	//using erfc function in cmath
	//CDF[NormalDistribution[mu,sigma],x]==(1/2)*Erfc[(-x+mu)/Sqrt[2]*sigma]
}

void init(capitalist a) {
    //discarded
    //substitute with a destructor
}

void consume(capitalist a,int t) {
	for(int i=1;i<=3;i++) {
		a.storage[i]-=a.consumption[i];
	}
}

void trade(capitalist a,int t) {

}

void make_price(capitalist a,int t) {

}

void refresh() {
    
}

int main() {
    int t_max=0;
    std::cin>>t_max;
    capitalist person[3];
    person[0].name=0;
    person[1].name=1;
    person[2].name=2;
    init(person);//can't be compiled,substitute with a destructor
    for(int i=1;i<=t_max;i++){
        for(int j=0;j<=2;j++){
            consume(person[j],i);
            trade(person[j],i);
            make_price(person[j],i);//bug fixed
        }
        refresh();
    }
    return 0;
}