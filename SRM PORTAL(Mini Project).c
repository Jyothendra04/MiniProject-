#include <stdio.h>
int main()
{
    int choice;
    char username[20],password[20];
    printf("Enter your username:\n");
    scanf("%s",&username);
    printf("Enter your password:\n");
    scanf("%s",&password);
    if(strcmp(username,"Prabakaran")==0)
    {
        if(strcmp(password,"SRMIST")==0)
        {
            printf("\nWelcome...Login success!!!");
        }
    }
    else{
        printf("\nUser doesn't exist");
    }
    puts("                                          \n---------------------------------------------------- ");
    puts("                                          \n             SRMIST ADMISSION PORTAL                ");
    puts("                                          \n---------------------------------------------------- ");
    puts("                                          \n                                                     ");
    puts("                                          \n                1.  HIGHLIGHTS                       ");
    puts("                                          \n                2.  ELIGIBLITY CRITERIA              ");
    puts("                                          \n                3.  AVAILABLE COURSES                ");
    puts("                                          \n                4.  APPLY NOW                        ");
    puts("                                          \n                5.  ACADAMICS                        ");
    puts("                                          \n                6.  RESEARCH                         ");
    puts("                                          \n                7.  CAMPUS LIFE                      ");
    puts("                                          \n                8.  RANKING AND ACCREDITATION        ");
    puts("                                          \n                9.  FESS DETAILS                     ");
    puts("                                          \n                10. HOSTEL FACILITY                  ");
    puts("                                          \n                11. PLACEMENT                        ");
    puts("                                          \n                12. QUERIES AND CONTACTS             ");
    puts("                                          \n                                                    ");
    printf("                                        \nSelect your category from the above :");
    scanf("%d",&choice);
    
    
    switch (choice){
        case 1: 
        {
            printf("\n                                   Name of the Institute         -  SRM Institute of Science and Technology");
            printf("\n                                   Institute type                -  Deemed to be an University");
            printf("\n                                   Basic admission criteria      -  Entrance and Merit-Based");
            printf("\n                                   Apllication mode              -  Online");
            printf("\n                                   Name of Entrance exam         -  SRM Joint Engineering Entrance Exam(SRMJEEE)");
            printf("\n                                   Entrance mode                 -  Online");
            printf("\n                                   Scholarship                   -  YES");
            break;
        }
        case 2:
        { 
            printf("\n                                   10+2 with Physics, Chemistry, and Mathematics as compulsory subjects from any recognized board with minimum 60 percent \nmarks in aggregate OR 10+2 in the vocational stream with Physics, Chemistry, and Mathematics and 60 percent marks");
            printf("\n                                   Marks secured in SRMJEEE and/or qualifying examination ");
            break;
        }
        case 3:
        {
            printf("\n        '(B.Tech)'\nAerospace Engineering\nBiomedical Engineering\nMechanical Engineering\nCivil EngineeringCivil\nEngineering (Smart Infrastructure)\nComputer Sciences and Engineering\nComputer scince Engineering with specializations\nComputer Science and Medical\nEngineering Artificial Intelligence and Data ScienceCSE (Artificial Intelligence)\nCSE (Data Analytics)\nElectronics and Communication Engineering\nECE (Internet of Things)Robotics and AutomationElectronics & Computer Engineering\nMechanical Engineering\nMechanical Engineering (Digital Manufacting)\nMechanical Engineering (Industry Integrated)\nFood Processing Technology\nBiotechnology\n        'Bachelor of Science(B.Sc)'\nAgriculture (Honours)\nData Science and Analytics\nOptometry\nForensic Science\nInformation Security and Digital Forensic\n        'B.Tech(Lateral Entry)'\nAerospace Engineering\nBiomedical Engineering\nCivil Engineering\nComputer Science Engineering\nElectronics & Electrical Engineering\nRobotics and Automation\nElectronics & Communication Engineering\nElectronics & Media Technology\nMechanical Engineering\nAgricultural Engineering\nFood Processing and Engineering");
            break;
        }
        case 4:
        {
            printf("\n                                    NAME                       : ");
            printf("\n                                    COURSE                     : ");
            printf("\n                                    YEAR OF 12th PASSED OUT    : ");
            printf("\n                                    PHONE NUMBER               : ");
            printf("\n                                    10th PERCENTAGE            : ");
            printf("\n                                    12th PERCENTAGE            : ");
            printf("\n                                                                 ");
            printf("\n                                    As soon as we will contact you for the further confirmations,Thank you for aplliying");
            break;
        }
        case 5:
        {
            printf("\n      We provide the best infrastructural facilities and a rich learning experience to educate, engage and empower our \nstudents to be engineers, technologists, scientists, artists, professionals, managers and leaders.\nPrograms offered in Engineering, Arts, Science, Media, Management & Health Sciences with student-centred pedagogy");
            break;
        }
        case 6:
        {
            printf("\n      With Food, Water, Energy and Healthcare as our focal areas, we engage in core and interdisciplinary research driving \nin novative discoveries and inventions to solve the problems of society. New ideas, patents, products and publications \nemerge out of our research centres and centres of excellence in research.");
            break;
        }
        case 7:
        {
            printf("\n      SRM is a residential institution, hosts diverse, creative and talented people from the state of India and from \ndifferent parts of the world with a safe, secure environment and a plethora of student activities, the campus life at \nSRM is vibrant, colourful, entertaining and engaging.");
            break;
        }
        case 8:
        {
            printf("\n      Ranked consecutively for 4 cycles among the Top 35 institutions in India by National Institute Ranking Framework (NIRF) \nRankings under the University and Engineering Institution categories.");
            printf("\n      Ranked among the Top 26-50 institutions in India by Atal Ranking of Institutions on Innovation Achievement Ranking.");
            printf("\n      Rated as a Three Four Institution in QS Star Rating.");
            printf("\n      Awarded QS E-LEAD certification for exemplary performance in online teaching-learning.");
            printf("\n      Accredited by NAAC, NBA & ACCA.");
            printf("\n      Approved by UGC and AICTE.");
            break;
        }
        case 9:
        { 
            printf("\n                                      FESS DETAILS");
            printf("\n                           B.Tech	          -  ₹3.50 Lakhs (1st Year Fees)");
            printf("\n                           B.Sc	          -  ₹84,300     (1st Year Fees)");
            printf("\n                           M.Sc	          -  ₹75,000     (1st Year Fees)");
            printf("\n                           B.Sc {Hons.}	  -  ₹2.14 Lakhs (1st Year Fees)");
            printf("\n                           BA	              -  ₹95,750     (1st Year Fees)");
            printf("\n                           B.Tech {Lateral} -  ₹3.00 Lakhs (1st Year Fees)");
            printf("\n                           MBA	          -  ₹3.75 Lakhs (1st Year Fees)");
            break;
        }
        case 10:
        { 
            puts("\n                             Six seater with non AC faciity     - 60000  + Mess fees - 1.10 lakhs");
            puts("\n                             Four seater with non AC facility   - 68000  + Mess fees - 1.18 lakhs");
            puts("\n                             Double seater with non AC facility - 80000  + Mess fees - 1.30 lakhs");
            puts("\n                             Single seater with non AC facility - 1 lakh + Mess fees - 1.50 lakhs");
            puts("\n                             Three seater with AC facility      - 90000  + Mess fees - 1.40 lakhs");
            puts("\n                             Double seater with AC facility     - 1 lakh + Mess fees - 1.50 lakhs");
            break;
        }
        case 11:
        {
            printf("\n        One of the Excellent colleges in India and 100 percent nice place to study. The NRI and also Foreign students the fee \nstructure is very very high including tuition and hostel food expenses for 4 years. Where as for SAARC neighboring \ncountry students it's moderate. For Resident Indian students it's reasonable which is very good for them.\nPlacement is arranged by college after the courses that's excellent. Amazing place no doubt. Many students enjoyed \nstudying here and placed in very good companies. Except the fee structure for NRI students, every thing is perfect.");
            break;
        }
        case 12:
        {
            printf("\n        Address          : SRM Institute of Science and Technology,SRM Nagar, Kattankulathur - 603 203,Chengalpattu District, Tamil Nadu. ");
            printf("\n        Call UsHelpdesk  : +91-44- 27417000,+91-44- 27417499");
            printf("\n        Email            : infodesk@srmist.edu.in");
            break;
        }
        default:
        {
            printf("Wrong input please check once again");
        }
        return 0;
    }
    
}