#include <stdio.h>

int main(void){
	int ary[5];
    int i;
    int index;
    // 1
    for(i=0; i < 5; i++){
        printf("%d�� ���� �Է� : ", i+1);
        scanf("%d", &ary[i]);
    }	

    while(1)
    {
        // 2
        printf("����ϰ� ���� ������ ��ġ�� �Է��ϼ���.(1~5):");
        scanf("%d", &index);

        if( (index > 0) && (index < 6) ){
            printf("%d���� ���ڴ� %d�Դϴ�.\n", index, ary[index-1]);
        }
        else{
            break;
        }
    }

	return 0;
}
