
int count_stu(vector<int> &A, int pages){
    int stu = 1;
    long long page_stu = 0;
    for(int i=0; i < A.size(); i++){
        if(page_stu + A[i] > pages){
            stu += 1;
            page_stu = A[i];
        }else{
            page_stu += A[i];
        }
    }
    return stu;
}

int Solution::books(vector<int> &A, int B) {
    if(B > A.size()){
        return -1;
    }
    int low = 0;
    for(int i=0; i < A.size(); i++){
        low = max(low, A[i]);
    };
    int high = 0;
    for(int i=0; i < A.size(); i++){
        high += A[i];
    };

    while(low <= high){
        int mid = (low + high) / 2;
        int student = count_stu(A, mid);
        if(student <= B){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return low;
};