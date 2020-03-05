#include<stdio.h>

int jumlah(int a[], int input){
    int megumin, num = 0;
    for(megumin=0; megumin<input; megumin++)
    {
        num=num+a[megumin];
    }
    return num;
}

int find_maximum(int d[], int n) {
  int c, max, index;

  max = d[0];
  index = 0;

  for (c = 1; c < n; c++) {
    if (d[c] > max) {
       index = c;
       max = d[c];
    }
  }

  return index;
}

int find_minimum(int f[], int j) {
  int e, min, index;

  min = f[0];
  index = 0;

  for (e = 1; e < j; e++) {
    if (f[e] < min) {
       index = e;
       min = f[e];
    }
  }

  return index;
}

float mean(int a[], int input) {
  int i;
  int sum=0;
  float avg=0.0;

    for(i=0;i<input;i++)sum+=a[i];
    avg=sum/input;
    return avg;
}

int median(int a[], int input){
    int i;
    int j;
    int d;
    float y=0.0;
for(i=0; i<input; i++)
        {
        for(j=i+1; j<input; j++)
            {
            if(a[i]>a[j])
                {
                d=a[i];
                a[i]=a[j];
                a[j]=d;
                }
            }
        }
            if(input%2==0)
                y=(float)(a[input/2]+a[(input-1)/2])/2;
            else
                y=a[(input-1)/2];
                return y;
}

int modus(int a[],int input) {
   int index = 0, count = 0, i, j;

   for (i=0; i<input; ++i) {
      int counter = 0;

      for (j=0; j<input; ++j) {
         if (a[j] == a[i])
         ++counter;
      }

      if (counter > count) {
         count = counter;
         index = a[i];
      }
   }

   return index;
}

int main()
{
    system("color A");
    int megumin;
    int a[20]={0},input, maximum, minimum, location;
    float x=0.0,y=0.0;

    printf("\nThis Program created by \n");
    printf(" Okky Dwi Triferyawan    \n");
    printf("     012201800005     \n\n\n");

    printf("\nPlease limit input :\t");
    scanf("%d",&input);

    printf("\nPlease Input %d Score :\t", input);


    for(megumin=0; megumin<input; megumin++)
    {
        scanf("%d",&a[megumin]);
    }
    location = find_maximum(a, input);
    maximum  = a[location];
    location = find_minimum(a, input);
    minimum  = a[location];
    printf("\nTotal Score = %d\n", jumlah(a,input));
    printf("Maximum Score = %d\n", maximum);
    printf("Minimum Score = %d\n", minimum);
    printf("Mean\t= %.2f", mean(a,input));
    printf("\nMedian\t= %d", median(a,input));
    printf("\nModus\t= %d\n", modus(a,input));
}
