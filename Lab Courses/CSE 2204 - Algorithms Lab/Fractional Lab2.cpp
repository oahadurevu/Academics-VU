#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,capacity;
    cout<<"Number of products: ";
    cin>>n;
    cout<<"Knapsack Capacity: ";
    cin>>capacity;
    int product[n],value[n],weight[n],v_per_w[n];
    for(int i=0;i<n;i++)
    {
        cin>>product[i]>>value[i]>>weight[i];
        v_per_w[i]=value[i]/weight[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v_per_w[i]<v_per_w[j])
            {
                swap(product[i],product[j]);
                swap(value[i],value[j]);
                swap(weight[i],weight[j]);
                swap(v_per_w[i],v_per_w[j]);
            }
        }
    }
    cout<<"After sorting: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<product[i]<<" "<<value[i]<<" "<<weight[i]<<" "<<v_per_w[i]<<" "<<endl;
    }
    int current_weight=0,total_value=0;
    for(int i=0;i<n;i++)
    {
        if(current_weight+weight[i]<=capacity)
        {
            current_weight+=weight[i];
            total_value+=value[i];
        }
        else
        {
            int fraction=(capacity-current_weight)*v_per_w[i];
            total_value+=fraction;
            break;
        }
    }

    cout<<"Total maximum value: "<<total_value;

}
