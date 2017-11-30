#include<stdio.h>
#include<math.h>
void main()
{
    char set[100][100],ch;
    printf("Press '1' For end Of Input\n");
    while(1)
    {
        int i=0;
        printf("Give The elements Of Set:");
        while(1)
        {
            scanf("%s",set[i]);
            if(set[i][0]=='1')
                break;
            i++;
        }
        printf("The Number Of Subset is %d\n",(int)pow(2,i));
        int size = i,j,x;
        int  psz=pow(2,size);
        printf("{ (");
        for(i=0;i<psz;i++)
        {
            x=i;
            printf("(");
            for(j=0;j<size;j++)
            {
                if(x%2==1)
                    printf("%s,",set[j]);
                    x=x/2;
            }
            printf("\b) , ");
        }
        printf("\b\b}\n");
        printf("Do You Want to Continue[y/n]:");
        scanf(" %c",&ch);
        if(ch == 'n' || ch == 'N')
            break;
    }
}
