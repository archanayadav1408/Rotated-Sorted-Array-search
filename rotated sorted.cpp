int Solution::search(const vector<int> &A, int x) {
int n=A.size();
int st=0;
int end=n-1;
int mid;

   while(st<=end){ 
    mid = (st+end)/2;
    if(A[mid]==x)
        return mid;
    if(A[st]>A[end])
    {
        if(A[mid]>=A[st])
        {
            if(A[mid]>x && x>=A[st])
                 end=mid-1;
            else
                   st=mid+1;
        }
        else
        {
            if(x<=A[end] && x>A[mid])
                    st=mid+1;
            else
                 end=mid-1;
        }
    }
    else
    {
        if(A[mid]>x) 
            end=mid-1;
        else
           st=mid+1;
    }
}


    
return -1;    
    
}

