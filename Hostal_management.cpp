#include<stdio.h>
#include<windows.h>
struct student{
    char name[20];
    int ID;
    char branch[40];
    char D_O_B[20];
    char contact_number[11];
    int Hostel_number;
    char room_catagory[2]; 
}s[200] = {  "vikash", 2011, "AI", "16072002", "9810621305", 4, "s",
              "Sahil", 2018, "cse", "16092002", "9852468271", 1, "c",
              "Varun", 2019, "cse", "14062001", "8569732451", 3, "s",
            };
void student_data(int ID2)
{
    for(int i=0;i<200;i++)
    {
        if (s[i].ID == ID2)
        {
            printf(" Student name : %s\n",s[i].name);
            printf(" Student name : %d\n",s[i].ID);
            printf(" Student name : %s\n",s[i].branch);
            printf(" Student name : %s\n",s[i].D_O_B);
            printf(" Student name : %s\n",s[i].contact_number);
            printf(" Student name : %d\n",s[i].Hostel_number);
            printf(" Room category : %s\n",s[i].room_catagory);
        } 
    }       
}

void main_menu()
{
    int ch1,id,pass,id2;
     printf("******************************** Menu *****************************\n");
     printf(" Press (1) if you are an Admin \n Press (2) if you are a student\n Press (3) if you are a visitor\n");
    printf("Enter your choice : ");
    scanf("%d",&ch1);
    if(ch1==1)
    {
        system("cls");
        printf("********************Admin Login*******************\n");
        printf("                  Enter the ID :      ");
        scanf("%s",&id);
        printf("               Enter your passward :  ");
        scanf("%s",&pass);
        system("cls");
        back1();    
    }   
    else if(ch1==2)
    {
        system("cls");
        printf("***********STudent login****************\n");
        printf("        Enter your ID number :");
        scanf("%d",&id2);
        printf("**************Dashboard**************** \n");
        student_data(id2);
        printf(" ***************************************\n");
        printf("\n");
        back2();
        
    }
    else if(ch1 == 3)
    {
        back3();
    }
}

void back1()
{
   
    int ch2,ch4,ID2;
    printf(" Press (1) to see Student info \n Press (2) to see Workers of hostels\n Press (3) for registration\n");
    scanf("%d",&ch2);
    if(ch2 ==1 )
     {
           printf(" ********** Sudent information ************\n");
           printf(" Enter the student ID :");
           scanf(" %d",&ID2); 
           student_data(ID2);
        
     }
    else if(ch2 == 2)
     {
           printf(" ******************* worker in hostel 1 *******************\n");
           printf(" Mess Incharge  ||  Wordon   ||  Gate Keeper \n");
           printf("   Vijay Singh  ||  Amit     ||  Roshan Singh \n");
            printf(" ******************* worker in hostel 2 *******************\n");
           printf(" Mess Incharge  ||  Wordon   ||  Gate Keeper \n");
           printf("  Vijay Malia   ||  Suraj    ||  Varun Singh \n");
            printf(" ******************* worker in hostel 3 *******************\n");
           printf(" Mess Incharge  ||  Wordon   ||  Gate Keeper \n");
           printf("   Vijay Singh  ||  Jitesh   ||  Kapil Panday \n");
            printf(" ******************* worker in hostel 4 *******************\n");
           printf(" Mess Incharge  ||  Wordon   ||  Gate Keeper \n");
           printf("   Kartik       ||  Rahul    ||  KAmlesh Singh \n");
           printf(" ************************************************************\n");
     }
    else if(ch2 == 3)
     {
          printf("  **************** Student  Registration *********************\n\n");
          printf("Enter the name of the student :");
          scanf("%s",s[0].name);
          printf("Enter ID :");
          scanf("%d",&s[0].ID);
          printf("Enter the branch :");
          scanf("%s",s[0].branch);
          printf("Date of birth should be in format of : xx/xx/xxxx\n");
          printf("Enter the date of birth :");
          scanf("%s",s[0].D_O_B);
          printf("ENter the student contact number :");
          scanf("%s",s[0].contact_number);
          printf("Enter the hostel no :");
          scanf("%d",&s[0].Hostel_number);
          printf("Press 's' for single room and 'c' for combined room\n");
          scanf(" %c",&s[0].room_catagory);
     }
        printf("\n");
        printf("**********************************************\n");
        printf("\n");
     printf(" For main menu press (9) \n For back press (0)\n");
     printf(" Enter your choice :");
     scanf("%d",&ch4);
     if(ch4 == 9)
     {
         printf("\n");
         printf("**********************************************\n");
         printf("\n");
         main_menu();
     }
     else if(ch4 == 0)
     {
        printf("\n");
        printf("**********************************************\n");
        printf("\n");
         back1();
     }
}

     void back2()
    {
         int ch3,ch5;
         printf(" press 1 to see secretary of departments\n"); 
        printf("press 2 to see weekly food menu\n");
        printf("press 3 to see interhostel competition\n");
        printf("press 4 to see hostel rules and regulation\n");
        printf("Enter your choice : ");
        scanf("%d",&ch3);
        system("cls");  
        switch(ch3)
        {
            case 1:
            {
                printf(" *****************secretary of department for hostel 1 ***********************\n ");
                printf("Mess department  || Sport department  || library Department || maintanace departmemt \n");
                printf(" Amit Sharma     ||  Varun Gupta      ||  Akshat Sukla      ||   Ankit Sharma         \n");
                printf(" B.tech 6th sem  ||  B.tech 7th sem   ||  BCA 5th sem       ||   BBA 4th sem         \n\n");
                printf(" *****************secretary of department for hostel 2 ***********************\n ");
                printf("Mess department  || Sport department  || library Department || maintanace departmemt \n");
                printf(" Vikash Singh    ||  Aakash singh     ||  Akshat Sukla      ||   Ankit Sharma         \n");
                printf(" B.tech 4th sem  ||  B.tech 7th sem   ||  BCA 5th sem       ||   BBA 4th sem         \n\n");
                printf(" *****************secretary of department for hostel 3 ***********************\n ");
                printf("Mess department  || Sport department  || library Department || maintanace departmemt \n");
                printf(" Amit Sharma     ||  Varun Gupta      ||  Akshat Sukla      ||   Ankit Sharma         \n");
                printf(" B.tech 6th sem  ||  B.tech 7th sem   ||  BCA 5th sem       ||   BBA 4th sem         \n\n");
                printf(" *****************secretary of department for hostel 4 ***********************\n ");
                printf("Mess department  || Sport department  || library Department || maintanace departmemt \n");
                printf(" Amit Sharma     ||  Varun Gupta      ||  Akshat Sukla      ||   Ankit Sharma         \n");
                printf(" B.tech 6th sem  ||  B.tech 7th sem   ||  BCA 5th sem       ||   BBA 4th sem         \n\n");
            }
            break;
            case 2:
            {
                printf("                                          ***************Food Menu For This Week******************\n");
                printf(" Day             Breakfast                        lunch                              Snacks                  dinner \n");
                printf("Monday    : Bread Butter/omelette/jam tea  ||seasonal veg,Bhujjia,roti,papad     ||veg roll,tea        ||jeera rice,corn masala,roti,dal            \n");
                printf("Tuesday   : Puri,Aloo Dum Saabzi,Tea       ||Rice,Dal,Aloo Soya,Bundi Raita,Roti ||Bread Pakoda,COffee ||Butter Roti,Dal Tadka,Mix Veg             \n");
                printf("Wednesday : Idli,Samber,tea                ||Rice,Dal,Aloo,Chana                 ||Papadi chat,Tea     ||(Chicken chilly)/malai Kofta,Rice,Dal-veg     \n");
                printf("Thrusday  : Paratha,Aaloo channa,Tea       ||Bhindi Bhujjia,chawal Dal,Roti,Salad||Kacodi,Dal,Coffee   ||Fried Rice,Aaloo Ghobi,Gulab Jamun,Roti,Dal\n");
                printf("Friday    : Boiled Egg/Bread Butter/Milk   ||Rajma Chawal,French Fries,Roti,Salad||Samosa Chat,Tea     ||Chilly Chicken,Paneer,Roti,Dal,Chawal     \n");
                printf("Saturday  : Dosa,Chutney,Tea               ||Khichdi                             ||Dosca,Tea           ||Normal Puri,White RAsgullah,Dum Matar,Rice  \n");
                printf("Sunday    : Chole Bhature,tea              ||Rice Roti,Dry Mix Veg,Chawal Dal    ||Maggi,Coffee        ||(Paneer Pasanda)/(Chicken Dehati)        \n");
            }
            break;
            case 3:
            {
                printf(" ********************* upcoming interhostel Events *********************** \n\n");
                printf("                   *********  Sport competition  *********      \n");
                printf("                volley ball        ---->    06/09/2021    \n");
                printf("                chess              ---->    12/09/2021    \n");
                printf("                relay race         ---->    17/09/2021    \n");
                printf("                swimming           ---->    22/09/2021    \n\n");
            }
            break;
            case 4:
            {
                printf("****************** Hostel Rules and Regulation ****************\n");
                printf("*******************COMMON TO BOYS AND GIRLS*****************\n");

                printf("1. Application for admission to hostel shall be made in the prescribed form which can be had from the Hostel Office.\n");
                printf("2. Allotement of rooms shall be made by the Deputy Wardens under the orders of Warden.\n");
                printf("3. Students must occupy the rooms allotted to them and should not change/exchange rooms without prior permission from the Deputy Warden/Hostel Authorities. Violations of this rule will result in the Expulsion of the student concerned from the hostel.\n");
                printf("4. Resident Member may be shifted from one room to another without assigning any reason by the Deputy Warden.\n");
                printf("5. Hostel Furniture shall not be removed from one room to another under any circumstances. Students are responsible for the care of furniture and fittings in their respective rooms. The cost of furniture and fittings will be recovered from them in case of any damage or loss along with the fine of Rs.1000/-.\n");
                printf("6. Students are not allowed to use extra electrical fitting in their rooms unless permitted by the Hostel Authorities.\n");
                printf("7.All the rooms, doors and windows should be kept neat and tidy. A fine of Rs.2000 will be levied for disfiguring of doors, glass panels, Furniture and walls of rooms from the resident(s) of the room in addition to the amount needed for repairing and repainting the above.\n");
                printf("8. A Collective fine of Rs.3000 /-will be collected from the residents of the respective wings/floors for disfiguring Veranda’s and Bathrooms in addition to the amount needed for repairing the above.\n");
                printf("9. A Collective fine of Rs.5000 /-will be collected from the residents of respective blocks for disfiguring the common rooms or damaging the public property of hostel blocks, in addition to the replacement cost.\n");
                printf("10. Students should keep the toilets and bathrooms clean, failing which a collective fine of Rs.3000/- will  be collected from the residents of the respective wings/floors.\n");
                printf("11. Residents are instructed to switch off the lights and fans when they go out of  the rooms, to save electric power. A fine of Rs.250/- per day will be collected from the residents of the rooms, who violate this instruction.\n");
                printf("12. Guests /Visitors are not permitted to enter any rooms allotted to the residents. Anyone who violates helps to violate this rule will be levied a fine of Rs.1000/- and will be evicted from the hostel by the hostel authorities.\n");
                printf("13. If any misuse of computers and mobile phones in hostel rooms is brought to notice of Hostel authorities the respective resident(s) will be expelled from the hostel.\n");
                printf("14. Students should not arrange any functions or meeting within the hostel /collage campus or outside the campus, without prior permission from the Principal and Warden.\n");
                printf("15. Any student who is removed from the college will automatically cease to be a member of the hostel.\n");
                printf("16. Accommodation in the hostel will not be given to students who are not active boarders in the hostel.\n");
                printf("17. No student should stay away from the hostel on any day without the prior permission of the concerned Deputy Warden/Associate Warden/Principal and Warden.\n");
                printf("18. Abnormal activities of any nature causing disturbance to neighbours should not be carried out in the rooms.\n");
                printf("19. Students should not paste any posters /pictures etc on the walls, doors, windows and shelves. Cut-outs should not be placed or brought in the hostel.\n");
                printf("20. Student should not keep large amount of cash or costly items like mobile phones, camera, Electronic gadgets, jewellery etc. in their rooms. Hence complaint about loss or theft about such costly items is discouraged.\n");
                printf("21. Married students are not eligible for hostel\n ");
                printf("22. Students should not keep Mopeds, Motor cycles, Scooters and cars in the hostel premises.\n");
                printf("23. Students should settle in their rooms at 9 pm at studies on normal days and at 10 pm on free night days (Saturdays and Sundays) & maintain silence. \n");
                printf("24. Girl students should return to the hostel before 6.30 pm and boys before 8 pm on all days. \n");
                printf("25. The hostel will be personally inspected by the Deputy Warden and other authorities regularly. The residents will be subjected to sever disciplinary action if they fail to follow above mentioned rules and regulations.\n");
            }
            break;
        }

        printf("\n");
        printf("*****************************************************************************\n");
        printf("\n");
        printf(" Press (9) for main menu \n Press (0) for back\n");
        printf(" Enter your choice :");
        scanf("%d",&ch5);
        if(ch5 == 9)
        {
            printf("\n");
            printf("**********************************************\n");
            system("cls");
            main_menu();
        }
        else if(ch5 == 0)
        {
            printf("\n");
            printf("**********************************************\n");
            system("cls");
           back2();
        }

    }
void back3()
{
 
        printf("                                                   About Hostel                                       \n");
       printf("                                                       ||                                             \n");
       printf("                                                       ||                                             \n");
       printf("                                                       ||                                             \n");
       printf("                                                   (4 Hostels)                                        \n");
       printf("                                                       ||                                             \n");
       printf("                 **************************************  ********************************             \n");
       printf("                ||                                                                      ||            \n");
       printf("                ||                                                                      ||            \n");
       printf("                ||                                                                      ||            \n");
       printf("          3 Boys Hostels  ------------------------------------------------------- 1 Girls Hostel      \n");
       printf("               ||                                      ||                               ||            \n");
       printf("               ||                                      ||                               ||            \n");
       printf("       *** Room Rent ***                          Seperated Mess                 *** Room Rent ***    \n");
       printf("       ||             ||                        Seperated Library                ||              ||     \n");
       printf("       ||             ||                    Aprox 1.7km from college             ||              ||   \n");
       printf("  Separate Room    Share Room                     Wfi facility           Separate Room      Share Room \n");
       printf("       ||             ||                                                         ||              ||    \n");
       printf("   10000 rupees   8000 rpuees                                              8000 rupees      6000 rupees \n\n");
}

     

int main()
{
    struct student s[100];

    printf( "                                         ------- Welcome to exotic hostel --------------\n\n\n                             ");

    main_menu();

    return 0;
}
