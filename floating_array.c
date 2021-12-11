
//Floating array 
//------------------------------------------------------------------------------------//
//                 This program is created by Yugal Sharma 
//------------------------------------------------------------------------------------//
#include<stdio.h>
#include<conio.h>
main(){
	
	float array[20],temp;
	int i,j,values,temp_3,run;
	system("cls");
	while(1){
			printf("\n\n_________________________Floating Array___________________________________");
			printf("\n\n\t1: Run the Program");
			printf("\n\t2: EXIT");
			
			printf("\n\n\tEnter your choice:\t");
			scanf("%d",&run);
			start:
	
		switch(run){
		
			case 1:
				printf("\n\n\tHow many values you want to enter:\t");
				scanf("%d",&values);
				printf("\n\n______________________________________________________________________");
				if(values==0){
					printf("\n\n______________________________________________________________________");
					printf("\t\n\tYou have choosen 0,\n\tChoose some bigger value than 0.");
					printf("\n\n______________________________________________________________________");
					printf("\n\n\tPress Enter to continue");
					getch();
					goto start;
					
				}
				printf("\n\n______________________________________________________________________");
				for(i=0;i<values;i++){
					printf("\n\tEnter the float value of array[%d]:\t",i);
					scanf("%f",&array[i]);
				}
				printf("\n\n______________________________________________________________________");
				system("cls");
				printf("\n\n______________________________________________________________________");
				for(i=0;i<values;i++){
					printf("\n\n\tThe entered values of the array are:\t%.2f",array[i]);
				}
				printf("\n\n______________________________________________________________________");
					
			//copying an array
				float cp_array[20],temp_2;
				for(i=0;i<values;i++){
						temp_2=array[i];
						cp_array[i]=temp_2;
						temp_3=i;
				}
			
			//Sorting the above floating array in assending order
				for(i=0;i<values;i++){
					for(j=0;j<values;j++){
						
						if(array[i]<array[j]){
							temp=array[i];
							array[i]=array[j];
							array[j]=temp;
						}
					}
				}
				printf("\n\n______________________________________________________________________");
				for(i=0;i<values;i++){
					printf("\n\n\tThe sorted value of array is:\t%.2f",array[i]);
				}
				printf("\n\n______________________________________________________________________");
				printf("\n\n\tPress Enter to continue");
				getch();
				system("cls");
				
			//Searching the floating value
			
				float user_input,k;
				int finding=0;
				printf("\n\n\tEnter the value you want to search:\t");
				scanf("%f",&user_input);
				
				for(i=0;i<values;i++){
					if(user_input==array[i]){
						finding=1;
						temp_3=i;
					}
				}
				system("cls");
				if(finding==1){
					printf("\n\n______________________________________________________________________");
					printf("\n\n\tYes %.2f value exist in the array and is at %d",user_input,temp_3+1);
					printf("\n\n______________________________________________________________________");
					printf("\n\n\tPress Enter to continue");
					getch();
					
				}
				else{
					printf("\n\n______________________________________________________________________");
					printf("\n\n\tThe %.2f do not exist in this array.",user_input);
					printf("\n\n______________________________________________________________________");
					printf("\n\n\tPress Enter to continue");
					getch();
				}
				system("cls");
				break;
			case 2:
				return 0;
				break;
	}//switch ends here
	printf("\n\n\n\n\n\n\n\n");//Just for extra spacing
}//while ends here
}//main ends here
