int main()
 {
	int t ;
    scanf("%d",&t) ;
    
        while(t--)
        {
          int n ;
          scanf("%d",&n) ;
          
          string str[n] ;
          for(int i=0 ; i<n ; i++)
          cin>>str[i] ;
          
          map<string,int>p ;
          
          for(int i=0 ; i<n ; i++)
          p[str[i]]++ ;
          
          int ans=-1 ;
          
          map<string,int>:: iterator it ;
          
          for( it=p.begin() ; it!=p.end() ; it++)
          {
              ans=max(ans,it->second) ;
          }
          
          for(it=p.begin() ; it!=p.end() ; it++)
          {
              if( it->second  == ans )
              {
                  cout<< it->first << endl ;
                  break ;
              }
          }
          
        }
	return 0;
}