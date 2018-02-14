long long int i,res,j;
    for(i=0;i<arr.size();i++)
    {
        //long k=arr[i];
        j=arr[i]%2;
        if(j==0)
        {
            cout<<(arr[i]/2)*(arr[i]/2)<<endl;
        }
        if(j!=0)
        {
           cout<<((arr[i])/2)*(((arr[i])/2)+1)<<endl;
        }
        //cout<<res<<endl;
    }
}

