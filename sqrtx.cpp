static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
cout<<commit1<<endl;
cout<<commit2<<endl;
cout<<commit3<<endl;
cout<<commit4<<endl;
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0)
        return 0;
        int l=1;
        int r=INT_MAX;
        while(1)
        {
            int mid=l+ (r-l)/2;
            if(mid > x/mid)
                r=mid-1;
            else
            {
                
                if((mid+1) > x/(mid+1))
                    return mid;
                l=l+1;
            }
        }
    }
};
