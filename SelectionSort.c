#include <stdio.h>

//thuật toán//
/**
  3 1 2
=>1 3 2
=>1 2 3
**/

//hàm thực hiện xắp xếp
void selectionSort(int a[],int n)
{
    for (int i = 0; i < n - 1; i++){  //vị trí xuất phát lặp là a[0], cho tới n-1 mỗi lần so sánh
    int min_pos = i;    // lưu vào min_pos là vị trí của biến nhỏ hơn
        for (int j = i + 1; j < n; j++)  // chạy vòng lặp tìm biến nhỏ hơn a[min_pos]
            if (a[j] < a[min_pos]) min_pos =  j;  //nếu có biến nhỏ hơn thì làm mới vị trí min
             //đổi dấu < thành > nếu sắp xếp giảm dần
        if (min_pos != i){   // thực hiện đảo chỗ 2 a[i] và a[min] vừa tìm được
            int temp = a[i];
            a[i] = a[min_pos];
            a[min_pos] = temp;
    }
  }
}

//hàm in mảng
void inMang(int a[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int main()
{
  int a[] = {5, 9, 7, 6, 4, 0, 2, 3, 8, 1};   //Khởi tạo mảng
  int n=sizeof(a)/sizeof(a[0]);   //số lượng phần tử mảng
  selectionSort(a,n);
  inMang(a,n);

  return 0;
}
