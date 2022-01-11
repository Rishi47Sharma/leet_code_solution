 for(int i =l;i<=r;i++)
        {
            for(int j =l;j<=r-i-1;j++ )
            {
                if(arr[j]>arr[j+1])
                {
                    int temp =arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
