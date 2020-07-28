include <bits/stdc++.h>

using namespace std;

long taumBday(int b, int w, int bc, int wc, int z) {
    long _b = b, _w = w, _bc= bc, _wc = wc, _z = z;
    if(bc==wc)
        return (_b+_w)*_wc;
  
    else if(bc<wc && (bc+z) < wc)
        return ((_b+_w)*_bc) +(_w*_z);
    
    else if(wc<bc && (wc+z) < bc)
        return ((_b+_w)*_wc) + (_b*_z);
    
    else 
        return (_b*_bc)+(_w*_wc);   
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
      int b,w,bc,wc,z; // long b,w,bc,wc,z 
      cin>>b>>w>>bc>>wc>>z;

      cout<<taumBday(b,w, bc, wc, z)<<endl;
    }
    return  0;
}
