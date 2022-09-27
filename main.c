#include <stdio.h>
#include <math.h>

void main() {
	int val, back, k;	
	printf("Entre com o valor para converter para binario\n");
	scanf("%d", &val); //Get the value in base ten to convert to binary
	back = val; //backup the value to another variable
	while(val!=0){
		val/=10;
		k++;
	}
	val=back;
	int array = (int)(k*log(10)/log(2));//this formula serves to calculate the size of the binary number
	array+=1;//increase one to be safe
	int bin[array], i, j=0;
	for(i=0; i<array; i++, j++){ //loop to generate the binary value, by dividing a base ten value by two until
		bin[i] = val%2;         //remains 0 or 1;
		val/=2;
	}
    int firstnumber = 0; //variable used as boolean with 0 or 1, if the number on array at position "i" is 0 then
	for(i=j-1;i>=0;i--){ //it won't show until the first 1 appears, when it does this variable changes to 1, and
        if(bin[i]==1){   //the program ll print the binary number
            firstnumber=1;
        }if(firstnumber==1){
            printf("%d|", bin[i]);
        }

	}
	printf("\n");
}
