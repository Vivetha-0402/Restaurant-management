/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char city,flavour;
    int hotel,menu,amt,sum=0;
    printf("Select a City:\nK for Karur\nD for Dindigul\nM for Madurai\nE for Erode\n");
    scanf("%c",&city);
    switch(city)
    {
        case 'K':
        printf("Select a flavour:\nV for veg / N for NonVeg\n");
        scanf(" %c",&flavour);
        switch(flavour)
        {
            case 'V':
           printf("Select your hotel:\n1.A2B Adyar Ananda Bhavan\n2.KMH Veg Restaurant\n");
            scanf("%d",&hotel);
            switch(hotel)
            {
                case 1:
                printf("A2B Adyar Ananda Bhavan\n");
                do
                {
                printf("STARTERS\n1.gobi manjurian - Rs.50\n2.panner tikka - Rs.80\n3.mushroom chilli - Rs.60\n");
                printf("MAIN COURSE\n4.mushroom rice - Rs.90\n5.vegetable briyani - Rs.45\n6.panner fried rice - Rs.125\n7.Exit\n");
                scanf("%d",&menu);
                switch(menu)
                {
                    case 1:
                    sum=sum+50;
                    break;
                    case 2:
                    sum=sum+80;
                    break;
                    case 3:
                    sum=sum+60;
                    break;
                    case 4:
                    sum=sum+90;
                    break;
                    case 5:
                    sum=sum+45;
                    case 6:
                    sum=sum+125;
                    case 7:
                    printf("You choose to Exit\n");
                    
                    
                }}while(menu!=7);
                printf("Your Bill : %d",amt);
                break;
                case 2:
                printf("KMH Veg Restaurant\n");
                printf("----starters----\n1.panner tikka - Rs.70\n2.baby corn - Rs.60\n3.mushroom manjurian - Rs.80\n");
                printf("----main course----\n4.veg meals - Rs.100\n5.veg noodles - Rs.55\n6.vegetable briyani - Rs.50\n7.Exit\n");
                scanf("%d",&menu);
                switch(menu)
                {
                    case 1:
                    sum=sum+70;
                    break;
                    case 2:
                    sum=sum+60;
                    break;
                    case 3:
                    sum=sum+80;
                    break;
                    case 4:
                    sum=sum+100;
                    break;
                    case 5:
                    sum=sum+55;
                    case 6:
                    sum=sum+50;
                    case 7:
                    printf("You choose to Exit\n");
                    
                break;
            }}while(menu!=7);
                printf("Your Bill : %d",amt);
            break;
            case 'N':
           printf("Select your hotel:\n1.Arafa Chicken Park\n2.Chef's Corner\n");
            scanf("%d",&hotel);
            switch(hotel)
            {
                case 1:
                printf("Arafa Chicken Park\n");
                printf("----starters----\n1.chicken lolipop - Rs.85\n2.grill fish - Rs.150\n3.garlic prawn - Rs.300\n");
                printf("----main course----\n4.fish meal - Rs.180\n5.schezwan fried rice - Rs.90\n6.chicken briyan - Rs.100\n7.Exit\n");
                 scanf("%d",&menu);
                switch(menu)
                {
                    case 1:
                    sum=sum+85;
                    break;
                    case 2:
                    sum=sum+150;
                    break;
                    case 3:
                    sum=sum+300;
                    break;
                    case 4:
                    sum=sum+180;
                    break;
                    case 5:
                    sum=sum+90;
                    case 6:
                    sum=sum+100;
                    case 7:
                    printf("You choose to Exit\n");
                break;
                }}while(menu!=7);
                printf("Your Bill : %d",amt);
                case 2:
                printf("Chef's Corner\n");
                 printf("----starters----\n1.full grill chicken - Rs.500\n2.butter chicken - Rs.150\n3.chicken drumstick - Rs.190\n");
       printf("----main course----\n4.mutton briyani - Rs.160\n5.mannpaanai parato - Rs.150\n6.egg briyani - Rs.75\n7.Exit\n");
                  scanf("%d",&menu);
                switch(menu)
                {
                    case 1:
                    sum=sum+500;
                    break;
                    case 2:
                    sum=sum+150;
                    break;
                    case 3:
                    sum=sum+190;
                    break;
                    case 4:
                    sum=sum+160;
                    break;
                    case 5:
                    sum=sum+150;
                    case 6:
                    sum=sum+75;
                    case 7:
                    printf("You choose to Exit\n");
                break;
            }}while(menu!=7);
                printf("Your Bill : %d",amt);
            break;
            default:
            printf("Select a valid option");
               break;
        }
        break;
        case 'D':
        printf("Select a flavour:\nV for veg / N for NonVeg\n");
        scanf(" %c",&flavour);
        switch(flavour)
        {
            case 'V':
         printf("Select your hotel:\n1.Sree Balaji Bhavan\n2.Meenakshi Bhavan\n ");
            scanf("%d",&hotel);
            switch(hotel)
            {
                case 1:
                printf("Sree Balaji Bhavan\n");
                printf("----starters----\n1.gobi manchurian - Rs.90\n2.cauliflower pakoda - Rs.30\n3.Garlic mushroom - Rs.85\n");
                printf("----main course----\n4.gobi rice - Rs.60\n5.naan with paneer butter masala - Rs.200\n6.paneer biriyani - Rs.175\n7.Exit\n");
                 scanf("%d",&menu);
                switch(menu)
                {
                    case 1:
                    sum=sum+90;
                    break;
                    case 2:
                    sum=sum+30;
                    break;
                    case 3:
                    sum=sum+85;
                    break;
                    case 4:
                    sum=sum+60;
                    break;
                    case 5:
                    sum=sum+200;
                    case 6:
                    sum=sum+175;
                    case 7:
                    printf("You choose to Exit\n");
                break;
                }}while(menu!=7);
                printf("Your Bill : %d",amt);
                case 2:
                printf("Meenakshi Bhavan\n");
                printf("----starters----\n1.veg dragon roll - Rs.185\n2.baby corn manchurian - Rs.195\n3.veg spring roll - Rs.100\n");
                printf("----main course----\n4.curd rice - Rs.50\n5.jeera rice - Rs.100\n6.veg noodles - Rs.65\n7.Exit\n");
                scanf("%d",&menu);
                switch(menu)
                {
                    case 1:
                    sum=sum+185;
                    break;
                    case 2:
                    sum=sum+195;
                    break;
                    case 3:
                    sum=sum+100;
                    break;
                    case 4:
                    sum=sum+50;
                    break;
                    case 5:
                    sum=sum+100;
                    case 6:
                    sum=sum+65;
                    case 7:
                    printf("You choose to Exit\n");
                break;
            }}while(menu!=7);
                printf("Your Bill : %d",amt);
            break;
            case 'N':
           printf("Select your hotel\n1.Aachis Non Veg Restaurant\n2.Dindigul Venu Briyani\n");
            scanf("%d",&hotel);
            switch(hotel)
            {
                case 1:
                printf("Aachis Non Veg Restaurant\n");
                printf("----starters----\n1.chicken 65 - Rs.75\n2.fish fry - Rs.50\n3.crab lolipop - Rs.190\n");
                printf("----main course----\n4.chicken fired rice - Rs.90\n5.prawn kothu parotta - Rs.120\n6.chicken lappa - Rs.90\n7.Exit\n");
                scanf("%d",&menu);
                switch(menu)
                {
                    case 1:
                    sum=sum+75;
                    break;
                    case 2:
                    sum=sum+50;
                    break;
                    case 3:
                    sum=sum+190;
                    break;
                    case 4:
                    sum=sum+90;
                    break;
                    case 5:
                    sum=sum+120;
                    case 6:
                    sum=sum+90;
                    case 7:
                    printf("You choose to Exit\n");
                break;
                }}while(menu!=7);
                printf("Your Bill : %d",amt);
                case 2:
                printf("Dindigul Venu Briyani\n");
                printf("----starters----\n1.chicken majestic - Rs.170\n2.chicken spring rolls - Rs.180\n3.egg manchurian - Rs.180\n");
                printf("----main course----\n4.schezwan chicken fired rice - Rs.180\n5.bucket mutton biriyani - Rs.1000\n6.bucket chicken biriyani - Rs.800\n7.Exit\n");
                scanf("%d",&menu);
                switch(menu)
                {
                    case 1:
                    sum=sum+170;
                    break;
                    case 2:
                    sum=sum+180;
                    break;
                    case 3:
                    sum=sum+180;
                    break;
                    case 4:
                    sum=sum+180;
                    break;
                    case 5:
                    sum=sum+1000;
                    case 6:
                    sum=sum+800;
                    case 7:
                    printf("You choose to Exit\n");
                break;
            }}while(menu!=7);
                printf("Your Bill : %d",amt);
            break;
            default:
            printf("Select a valid option");
               break;
        }
        break;
        case 'M':
        printf("Select a flavour:\nV for veg / N for NonVeg\n");
        scanf(" %c",&flavour);
        switch(flavour)
        {
            case 'V':
           printf("Select your hotel:\n1.Sri Sabarish\n2.Gowri Ganga\n");
            scanf("%d",&hotel);
            switch(hotel)
            {
                case 1:
                printf("Sri Sabarish\n");
                    printf("----starters----\n1.honey chilli couliflower - Rs.200\n2.veg cocktail kabab - Rs.250\n3.dragon paneer - Rs.250\n");
                    printf("----main course----\n4.rava dosa with veg salna - Rs.45\n5.onion fried rice - Rs.65\n6.tomato rice - Rs.50\n7.Exit\n");
                    scanf("%d",&menu);
                switch(menu)
                {
                    case 1:
                    sum=sum+200;
                    break;
                    case 2:
                    sum=sum+250;
                    break;
                    case 3:
                    sum=sum+250;
                    break;
                    case 4:
                    sum=sum+45;
                    break;
                    case 5:
                    sum=sum+65;
                    case 6:
                    sum=sum+50;
                    case 7:
                    printf("You choose to Exit\n");
                break;
                }}while(menu!=7);
                printf("Your Bill : %d",amt);
                break;
                case 2:
                printf("Gowri Ganga\n");
                printf("----starters----\n1.veg seekh kabab - Rs.80\n2.paneer lasooni tikka - Rs.80\n3.masala papad - Rs.20\n");
                printf("----main course----\n4.veg kadai- Rs.80\n5.veg maratha - Rs.80\n6.paneer butter masala - Rs.90\n7.Exit");
                 scanf("%d",&menu);
                switch(menu)
                {
                    case 1:
                    sum=sum+80;
                    break;
                    case 2:
                    sum=sum+80;
                    break;
                    case 3:
                    sum=sum+20;
                    break;
                    case 4:
                    sum=sum+80;
                    break;
                    case 5:
                    sum=sum+80;
                    case 6:
                    sum=sum+90;
                    case 7:
                    printf("You choose to Exit\n");
                break;
            }}while(menu!=7);
                printf("Your Bill : %d",amt);
            break;
            case 'N':
           printf("Select your hotel:\n1.Chola Restaurant\n2.Hotel RK\n ");
            scanf("%d",&hotel);
            switch(hotel)
            {
                case 1:
                printf("Chola Restaurant\n");
                    printf("----starters----\n1.beef ribs - Rs.120\n2.chicken seekh kabab - Rs.180\n3.garlic lobsters - Rs.200\n");
                    printf("----main course----\n4.mutton roghan josh - Rs.250\n5.chicken dum biriyani - Rs.150\n6.chicken roghan josh - Rs.150\n7.Exit\n");
                     scanf("%d",&menu);
                switch(menu)
                {
                    case 1:
                    sum=sum+120;
                    break;
                    case 2:
                    sum=sum+180;
                    break;
                    case 3:
                    sum=sum+200;
                    break;
                    case 4:
                    sum=sum+250;
                    break;
                    case 5:
                    sum=sum+150;
                    case 6:
                    sum=sum+150;
                    case 7:
                    printf("You choose to Exit\n");}}while(menu!=7);
                printf("Your Bill : %d",amt);
                break;
                case 2:
                printf("Hotel RK\n");
                 printf("----starters----\n1.squid fry - Rs.100\n2.chicken tikka - Rs.180\n3.boneless fish - Rs.40\n");
                 printf("----main course----\n4.chicken patiala - Rs.190\n5.pepper chicken with roti - Rs.100\n6.moghlai chicken - Rs.140\n7.Exit\n");
                 scanf("%d",&menu);
                switch(menu)
                {
                    case 1:
                    sum=sum+100;
                    break;
                    case 2:
                    sum=sum+180;
                    break;
                    case 3:
                    sum=sum+40;
                    break;
                    case 4:
                    sum=sum+190;
                    break;
                    case 5:
                    sum=sum+100;
                    case 6:
                    sum=sum+140;
                    case 7:
                    printf("You choose to Exit\n");
                break;
            }}while(menu!=7);
                printf("Your Bill : %d",amt);
            break;
            default:
            printf("Select a valid option");
               break;
        }
        break;
        case 'E':
        printf("Select a flavour:\nV for veg / N for NonVeg\n");
        scanf(" %c",&flavour);
        switch(flavour)
        {
            case 'V':
            printf("Select your hotel:\n1.Jannal Restaurant\n2.Gowri Shankar\n");
            scanf("%d",&hotel);
            switch(hotel)
            {
                case 1:
                printf("Jannal Restaurant\n");
                break;
                case 2:
                printf("Gowri Shankar\n");
                break;
            }
           
            break;
            case 'N':
            printf("Select your hotel:\n1.Taj Hotel\n2.Barbeque Nation\n");
            scanf("%d",&hotel);
            switch(hotel)
            {
                case 1:
                printf("Taj Hotel\n");
                break;
                case 2:
                printf("Barbeque Nation\n");
                break;
                
            }
          break;
            default:
            printf("Select a valid option");
            break;
        }
        break;
default:
        printf("Please Enter a Valid City");
        break;
        
    }
    

    return 0;
}
