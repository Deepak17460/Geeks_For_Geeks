 map<char,ll> v,c;
         ll ct=0;
         string res="",vo="",co="";
        for(int i=0; i<N;i++){
            if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u'){
                v[S[i]]++;
                ct++;
            }else{
                c[S[i]]++;
                ct--;
            }
        }
        if(ct<-1 || ct>1)return "-1";
        for(auto i : v){
            ll x=i.second;
            while(x>0){
                vo+=i.first;
                x--;
            }
        }
        //cout<<vo<<endl;
        for(auto i : c){
            ll x=i.second;
            while(x>0){
                co+=i.first;
                x--;
            }
        }
        //cout<<co<<endl;
        //cout<<ct<<endl;
        ll i=0;
        if(ct==0){
            if(co[0]>=vo[0]){
                while(i<vo.size()){
                    res+=vo[i];
                    res+=co[i];
                    i++;
                }
            }else{
                while(i<vo.size()){
                    res+=co[i];
                    res+=vo[i];
                    i++;
                }
            }
            
        }
        else if(ct==1){
            while(i<vo.size()){
                res+=vo[i];
                if(i<co.size()) res+=co[i];
                i++;
               }
            }
            
        else {
                while(i<co.size()){
                    res+=co[i];
                    if(i<vo.size())res+=vo[i];
                    i++;
                }
            }
             return res;
