#include <stdio.h>

int main() {

    int ngay, thang, nam;

    printf("Ngay : ");
    scanf("%d",&ngay);
    printf("Thang : ");
    scanf("%d",&thang);
    printf("Nam : ");
    scanf("%d",&nam);

    switch(thang) {

    case 1: case 3: case 5: case 7: case 8: case 10:  case 12:

                if( ngay>0 && ngay<=31){
                
                	tinhnamnhuan ();
		            break;
		        }
				 			
                else{
                    printf("Ngay %d thang %d nam %d : Ko hop le!\n",ngay,thang,nam);  
			        break;

                }
            
    case 4: case 6: case 9: case 11:

                if( ngay<=30 && ngay>0){

                    tinhnamnhuan ();
		            break;   
			    }

                else{ 
				    printf("Ngay %d thang %d nam %d : Ko hop le!\n",ngay,thang,nam); 
					break;

                }

    case 2:

                if( ngay <=29 && ngay > 0){

                if( nam%4 ==0 && nam %100 !=0 || nam%400 ==0 ) printf("Nam la nam nhuan ! ");
		            else
					{
						if(ngay==29){	
											
						    printf("Ngay %d thang %d nam %d : Ko hop le !",ngay,thang,nam) ;
							break;
						}
				     
					    printf("Nam khong phai nam nhuan ! ");					 
					 }
		            break;
                }

                else{               
			        printf("Ngay %d thang %d nam %d : ko hop le!\n",ngay,thang,nam);  
			        break;

                }

    default: printf("Ngay %d thang %d nam ko hop le!\n",ngay,thang,nam);
	         break;

    }
       _getch ();
       return 0;
}
    
int tinhnamnhuan (int nam){
	if( nam%4 ==0 && nam %100 !=0 || nam%400 ==0 ) printf("Nam la nam nhuan ! ");
	else printf("Nam khong phai nam nhuan ! "); 
}    

