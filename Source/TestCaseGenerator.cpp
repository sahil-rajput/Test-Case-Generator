//
//  TestCaseGenerator.cpp
//
//
//  Created by Sahil Rajput on 01/10/17.
//
//
#include"TestHeader.h"
//generate random number
long long randomNo(long long m1, long long m2)
{
   long long rand = 0;
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<> dis(m1, m2);
   rand = dis(gen);
   return rand;
}
long long randomGenerate()
{
   long long rand = 0;
   int m3 = INT_MAX;
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<> dis(1, m3);
   rand = dis(gen);
   return rand;
}
//Option 1
void numbers()
{
    cout<<"Number of Test Cases : ";
    cin>>tc;
    cout<<"1. Automatic\n"<<"2. User\n";
    cin>>choose;
    if(choose == 1)
    {
        cout<<"------------------------------[AUTOMATIC]------------------------------\n";
        outFile.open ("NumberAuto.txt", ofstream::app);
        for(int i = 0 ; i<tc;i++)
        {
            int r1 = randomGenerate();
            outFile<<r1<<"\n";
        }
        outFile.close();
    }
    else if(choose == 2)
    {
        cout<<"------------------------------[USER]------------------------------\n";
        cout<<"Enter Minimum Value : ";
        cin>>minimum;
        cout<<"Enter Maximum Value : ";
        cin>>maximum;
        outFile.open ("NumberUser.txt", ofstream::app);
        for(long long i=0;i<tc;i++)
        {
            outFile<<randomNo(minimum,maximum)<<"\n";
        }
        outFile.close();
    }
    else
    {
        cout<<"Wrong Choice\n";
    }
}
//Option 2
void generateArray()
{
    cout<<"Number of Test Cases : ";
    cin>>tc;
    cout<<"1. Array\n"<<"2. Array of Pairs\n"<<"3. Marix\n";
    cin>>choose;
    if(choose == 1)
    {
        cout<<"------------------------------[ARRAY]------------------------------\n";
        cout<<"Enter :-\n"<<"1. Array Size : ";
        cin>>array_size;
        cout<<"2. Print Size of Array before array elements 1 for [Yes] / 0 for [No] : ";
        cin>>printN;
        if(printN != 1 && printN !=0)
        {
            cout<<"Invalid Choice try again!\n";
            cout<<"2. Print Size of Array before array elements 1 for [Yes] / 0 for [No]: ";
            cin>>printN;
        }
        cout<<"1. Automatic\n"<<"2. User\n";
        cin>>choose1;
        if(choose1 == 1)
        {
            cout<<"------------------------------[AUTOMATIC]------------------------------\n";
            if(printN == 1)
            {
                outFile.open ("ArrayAuto.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    outFile<<array_size<<"\n";
                    for(long long j=0;j<array_size;j++)
                    {
                        long long rn = 0;
                        rn = randomGenerate();
                        outFile<<rn<<" ";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
            else
            {
                outFile.open ("ArrayAuto.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    for(long long j=0;j<array_size;j++)
                    {
                        long long rn = 0;
                        rn = randomGenerate();
                        outFile<<rn<<" ";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
        }
        else if(choose1 == 2)
        {
            cout<<"------------------------------[USER]------------------------------\n";
            cout<<"Enter :-\n"<<"1. Minimum Array size : ";
            cin>>minimum;
            cout<<"2. Maximum array size : ";
            cin>>maximum;
            if(printN == 1)
            {
                outFile.open ("ArrayUser.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    outFile<<array_size<<"\n";
                    for(long long j=0;j<array_size;j++)
                    {
                        long long rn= 0;
                        rn = randomNo(minimum,maximum);
                        outFile<<rn<<" ";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
            else
            {
                    outFile.open ("ArrayUser.txt", ofstream::app);
                    outFile<<array_size<<"\n";
                    for(long long i=0;i<tc;i++)
                    {
                        for(long long j=0;j<array_size;j++)
                        {
                            long long rn= 0;
                            rn = randomNo(minimum,maximum);
                            outFile<<rn<<" ";
                        }
                        outFile<<"\n";
                    }
                    outFile.close();
            }
        }
    }
    else if(choose ==2)
    {
        cout<<"------------------------------[ARRAY OF PAIRS]------------------------------\n";
        cout<<"Enter :-\n"<<"1. Number of Pairs : ";
        cin>>noofpair;
        cout<<"2. Print Size of Array before array elements 1 for [Yes] / 0 for [No] : ";
        cin>>printN;
        if(printN != 1 && printN !=0)
        {
            cout<<"Invalid Choice try again!\n";
            cout<<"2. Print Number of pair before array elements 1 for [Yes] / 0 for [No]: ";
            cin>>printN;
        }
        cout<<"1. Automatic\n"<<"2. User\n";
        cin>>choose1;
        if(choose1 == 1)
        {
            cout<<"------------------------------[AUTOMATIC]------------------------------\n";
            if(printN == 1)
            {
                outFile.open ("ArrayOfPairAuto.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    outFile<<noofpair<<"\n";
                    for(long long j=0;j<noofpair;j++)
                    {
                        long long rn1 = 0;
                        long long rn2 = 0;
                        rn1 = randomGenerate();
                        rn2 = randomGenerate();
                        outFile<<rn1<<" "<<rn2<<"\n";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
            else
            {
                outFile.open ("ArrayOfPairAuto.txt", ofstream::app);
                for(long long j=0;j<noofpair;j++)
                {
                    long long rn1 = 0;
                    long long rn2 = 0;
                    rn1 = randomGenerate();
                    rn2 = randomGenerate();
                    outFile<<rn1<<" "<<rn2<<"\n";
                }
                outFile<<"\n";
                outFile.close();
            }
        }
        else if(choose1 == 2)
        {
            cout<<"------------------------------[USER]------------------------------\n";
            cout<<"Enter :-\n"<<"1. Minimum Array size : ";
            cin>>minimum;
            cout<<"2. Maximum array size : ";
            cin>>maximum;
            if(printN == 1)
            {
                outFile.open ("ArrayofPairUser.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    outFile<<noofpair<<"\n";
                    for(long long j=0;j<noofpair;j++)
                    {
                        long long rn1= 0;
                        long long rn2 = 0;
                        rn1 = randomNo(minimum,maximum);
                        rn2 = randomNo(minimum,maximum);
                        outFile<<rn1<<" "<<rn2<<"\n";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
            else
            {
                outFile.open ("ArrayOfPairUser.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    for(long long j=0;j<noofpair;j++)
                    {
                        long long rn1= 0;
                        long long rn2 = 0;
                        rn1 = randomNo(minimum,maximum);
                        rn2 = randomNo(minimum,maximum);
                        outFile<<rn1<<" "<<rn2<<"\n";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
        }
    }
    else if(choose == 3)
    {
        cout<<"------------------------------[MATRIX]------------------------------\n";
        cout<<"Enter :- "<<"Number of Rows\n";
        cin>>row;
        cout<<"Number of Columns\n";
        cin>>col;
        cout<<"2. Print No. of Rows and Columns before MAtrix elements 1 for [Yes] / 0 for [No] : ";
        cin>>printN;
        if(printN != 1 && printN !=0)
        {
            cout<<"Invalid Choice try again!\n";
            cout<<"2. Print Number of pair before array elements 1 for [Yes] / 0 for [No]: ";
            cin>>printN;
        }
        cout<<"1. Automatic\n"<<"2. User\n";
        cin>>choose1;
        if(choose1 == 1)
        {
            cout<<"------------------------------[AUTOMATIC]------------------------------\n";
            if(printN == 1)
            {
                outFile.open ("MatrixAuto.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    outFile<<row<<" "<<col<<"\n";
                    for(long long j=0;j<row;j++)
                    {
                        for(long long k=0;k<col;k++)
                        {
                            long long rn1 = 0;
                            rn1 = randomGenerate();
                            outFile<<rn1<<" ";
                        }
                        outFile<<"\n";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
            else
            {
                outFile.open ("MatrixAuto.txt", ofstream::app);
                for(long long j=0;j<noofpair;j++)
                {
                    for(long long j=0;j<row;j++)
                    {
                        for(long long k=0;k<col;k++)
                        {
                            long long rn1 = 0;
                            rn1 = randomGenerate();
                            outFile<<rn1<<" ";
                        }
                        outFile<<"\n";
                    }
                    outFile<<"\n";
                }
                outFile<<"\n";
                outFile.close();
            }
        }
        else if(choose1 == 2)
        {
            cout<<"------------------------------[USER]------------------------------\n";
            cout<<"Enter :-\n"<<"1. Minimum Array size : ";
            cin>>minimum;
            cout<<"2. Maximum array size : ";
            cin>>maximum;
            if(printN == 1)
            {
                outFile.open ("MatrixUser.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    outFile<<row<<" "<<col<<"\n";
                    for(long long j=0;j<row;j++)
                    {
                        for(long long k=0;k<col;k++)
                        {
                            long long rn1 = 0;
                            rn1 = randomNo(minimum,maximum);
                            outFile<<rn1<<" ";
                        }
                        outFile<<"\n";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
            else
            {
                outFile.open ("MatrixUser.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    for(long long j=0;j<row;j++)
                    {
                        for(long long k=0;k<col;k++)
                        {
                            long long rn1 = 0;
                            rn1 = randomNo(minimum,maximum);
                            outFile<<rn1<<" ";
                        }
                        outFile<<"\n";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
        }
    }
    else
    {
        cout<<"Wrong Choice\n";
    }
}
//Option 3
void generateString()
{
    cout<<"IN PROCESS NOT COMPLETED\n";
    /*cout<<"Number of Test Cases : ";
    cin>>tc;
    cout<<"1. String\n"<<"2. Matrix\n";
    cin>>choose;
    if(choose == 1)
    {
        int string_choice;
        cout<<"------------------------------[String]------------------------------\n";
        cout<<"Enter :-\n"<<"1. String Size : ";
        cin>>string_size;
        string CapA[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z};
        string SmA[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        string Number[10]={'0','1','2','3','4','5','6','7','8','9'};
        cout<<"Character Allowed : \n"<<"1. [A-Z]\n"<<"2. [a-z]\n"<<"3. [0-9]\n";
        cin>>string_choice;
        if(string_choice == 1)
        {

        }
        else if(string)

    }
    else if(choose == 2)
    {

    }
    else
    {
        cout<<"Wrong Choice\n";
    }*/
}
//Option 4
void generateTree()
{
    cout<<"Number of Test Cases : ";
    cin>>tc;
    cout<<"1. Unweighted Tree\n"<<"2. Weighted Tree\n";
    cin>>choose;
    if(choose == 1)
    {
        cout<<"------------------------------[Unweighted Tree]------------------------------\n";
        cout<<"Enter:- \n"<<"1. Number of Nodes : ";
        cin>>node;
        cout<<"2. Indexed from 1/0 : ";
        cin>>Indexed;
        cout<<"3. Print Number of Nodes before elements 1 for [Yes]/ 0 for [No] : ";
        cin>>printN;
        cout<<"1. Automatic\n"<<"2. User\n";
        cin>>choose1;
        if(choose1 == 1)
        {
            cout<<"------------------------------[AUTOMATIC]------------------------------\n";
            if(printN == 1)
            {
                outFile.open ("UnweightedTreeAuto.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    outFile<<node<<"\n";
                    long long r1 = 0;
                    long long r2 = 0;
                    r1 = randomNo(1,200);
                    outFile<<r1<<" "<<Indexed<<endl;
                    for(long long j=1;j<node;j++)
                    {
                        r1 = randomNo(1,200);
                        r2 = randomNo(1,200);
                        outFile<<r1<<" "<<r2<<"\n";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
            else
            {
                outFile.open ("UnweightedTreeAuto.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    long long r1 = 0;
                    long long r2 = 0;
                    r1 = randomNo(1,200);
                    outFile<<r1<<" "<<Indexed<<endl;
                    for(long long j=1;j<node;j++)
                    {
                        r1 = randomNo(1,200);
                        r2 = randomNo(1,200);
                        outFile<<r1<<" "<<r2<<"\n";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }

        }
        else if(choose1 == 2)
        {
            cout<<"------------------------------[USER]------------------------------\n";
            cout<<"Enter :-\n";
            cout<<"1. Minumum value of Node : ";
            cin>>minimum;
            cout<<"2. Maximum value of Node : ";
            cin>>maximum;
            if(printN == 1)
            {
                outFile.open ("UnweightedTreeUser.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    outFile<<node<<"\n";
                    long long r1 = 0;
                    long long r2 = 0;
                    r1 = randomNo(minimum,maximum);
                    outFile<<r1<<" "<<Indexed<<endl;
                    for(long long j=1;j<node;j++)
                    {
                        r1 = randomNo(minimum,maximum);
                        r2 = randomNo(minimum,maximum);
                        outFile<<r1<<" "<<r2<<"\n";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
            else
            {
                outFile.open ("UnweightedTreeUser.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    long long r1 = 0;
                    long long r2 = 0;
                    r1 = randomNo(minimum,maximum);
                    outFile<<r1<<" "<<Indexed<<endl;
                    for(long long j=1;j<node;j++)
                    {
                        r1 = randomNo(minimum,maximum);
                        r2 = randomNo(minimum,maximum);
                        outFile<<r1<<" "<<r2<<"\n";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
        }
        else
        {
            cout<<"Wrong Choice\n";
        }
    }
    else if(choose == 2)
    {
        cout<<"------------------------------[Weighted Tree]------------------------------\n";
        cout<<"Enter:- \n"<<"1. Number of Nodes : ";
        cin>>node;
        cout<<"2. Indexed from 1/0 : ";
        cin>>Indexed;
        cout<<"3. Print Number of Nodes before elements 1 for [Yes]/ 0 for [No] : ";
        cin>>printN;
        cout<<"1. Automatic\n"<<"2. User\n";
        cin>>choose1;
        if(choose1 == 1)
        {
            cout<<"------------------------------[AUTOMATIC]------------------------------\n";
            if(printN == 1)
            {
                outFile.open ("WeightedTreeAuto.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    outFile<<node<<"\n";
                    long long r1 = 0;
                    long long r2 = 0;
                    long long r3 = 0;
                    r1 = randomNo(1,200);
                    r2 = randomNo(1,200);
                    outFile<<r1<<" "<<Indexed<<r3<<endl;
                    for(long long j=1;j<node;j++)
                    {
                        r1 = randomNo(1,200);
                        r2 = randomNo(1,200);
                        r3 = randomNo(1,200);
                        outFile<<r1<<" "<<r2<<" "<<r3<<"\n";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
            else
            {
                outFile.open ("WeightedTreeAuto.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    long long r1 = 0;
                    long long r2 = 0;
                    long long r3 = 0;
                    r1 = randomNo(1,200);
                    r2 = randomNo(1,200);
                    outFile<<r1<<" "<<Indexed<<r3<<endl;
                    for(long long j=1;j<node;j++)
                    {
                        r1 = randomNo(1,200);
                        r2 = randomNo(1,200);
                        r3 = randomNo(1,200);
                        outFile<<r1<<" "<<r2<<" "<<r3<<"\n";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }

        }
        else if(choose1 == 2)
        {
            cout<<"------------------------------[USER]------------------------------\n";
            cout<<"Enter :-\n";
            cout<<"1. Minumum value of Node : ";
            cin>>minimum;
            cout<<"2. Maximum value of Node : ";
            cin>>maximum;
            if(printN == 1)
            {
                outFile.open ("WeightedTreeUser.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    outFile<<node<<"\n";
                    long long r1 = 0;
                    long long r2 = 0;
                    long long r3 = 0;
                    r1 = randomNo(minimum,maximum);
                    r2 = randomNo(minimum,maximum);
                    outFile<<r1<<" "<<Indexed<<r3<<endl;
                    for(long long j=1;j<node;j++)
                    {
                        r1 = randomNo(minimum,maximum);
                        r2 = randomNo(minimum,maximum);
                        r3 = randomNo(minimum,maximum);
                        outFile<<r1<<" "<<r2<<" "<<r3<<"\n";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
            else
            {
                outFile.open ("WeightedTreeUser.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    long long r1 = 0;
                    long long r2 = 0;
                    long long r3 = 0;
                    r1 = randomNo(minimum,maximum);
                    r2 = randomNo(minimum,maximum);
                    outFile<<r1<<" "<<Indexed<<r3<<endl;
                    for(long long j=1;j<node;j++)
                    {
                        r1 = randomNo(minimum,maximum);
                        r2 = randomNo(minimum,maximum);
                        r3 = randomNo(minimum,maximum);
                        outFile<<r1<<" "<<r2<<" "<<r3<<"\n";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
        }
        else
        {
            cout<<"Wrong Choice\n";
        }
    }
    else
    {
        cout<<"Wrong Choice\n";
    }
}
//Option 5
void generateGraph()
{
    cout<<"Number of Test Cases : ";
    cin>>tc;
    cout<<"1. Unweighted Graph\n"<<"2. Weighted Graph\n";
    cin>>choose;
    if(choose == 1)
    {
        cout<<"------------------------------[Unweighted Graph]------------------------------\n";
        cout<<"Enter:- \n"<<"1. Number of Nodes : ";
        cin>>node;
        cout<<"2. Number Edges : ";
        cin>>edge;
        cout<<"3. Indexed from 1/0 : ";
        cin>>Indexed;
        cout<<"4. Print Number of Nodes and Edges before elements 1 for [Yes]/ 0 for [No] : ";
        cin>>printN;
        cout<<"1. Automatic\n"<<"2. User\n";
        cin>>choose1;
        if(choose1 == 1)
        {
            cout<<"------------------------------[AUTOMATIC]------------------------------\n";
            if(printN == 1)
            {
                outFile.open ("UnweightedGraphAuto.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    outFile<<node<<" "<<edge<<"\n";
                    long long r1 = 0;
                    long long r2 = 0;
                    r1 = randomNo(1,1000);
                    outFile<<r1<<" "<<Indexed<<endl;
                    for(long long j=1;j<edge;j++)
                    {
                        r1 = randomNo(1,1000);
                        r2 = randomNo(1,1000);
                        outFile<<r1<<" "<<r2<<"\n";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
            else
            {
                outFile.open ("UnweightedGraphAuto.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    long long r1 = 0;
                    long long r2 = 0;
                    r1 = randomNo(1,1000);
                    outFile<<r1<<" "<<Indexed<<endl;
                    for(long long j=1;j<edge;j++)
                    {
                        r1 = randomNo(1,1000);
                        r2 = randomNo(1,1000);
                        outFile<<r1<<" "<<r2<<endl;
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }

        }
        else if(choose1 == 2)
        {
            cout<<"------------------------------[USER]------------------------------\n";
            cout<<"Enter :-\n";
            cout<<"1. Minumum value of Node : ";
            cin>>minimum;
            cout<<"2. Maximum value of Node : ";
            cin>>maximum;
            if(printN == 1)
            {
                outFile.open ("UnweightedGraphUser.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    outFile<<node<<" "<<edge<<"\n";
                    long long r1 = 0;
                    long long r2 = 0;
                    r1 = randomNo(minimum,maximum);
                    outFile<<r1<<" "<<Indexed<<endl;
                    for(long long j=1;j<edge;j++)
                    {
                        r1 = randomNo(minimum,maximum);
                        r2 = randomNo(minimum,maximum);
                        outFile<<r1<<" "<<r2<<endl;
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
            else
            {
                outFile.open ("UnweightedGraphUser.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    long long r1 = 0;
                    long long r2 = 0;
                    long long r3 = 0;
                    r1 = randomNo(minimum,maximum);
                    r2 = randomNo(minimum,maximum);
                    outFile<<r1<<Indexed<<endl;
                    for(long long j=1;j<edge;j++)
                    {
                        r1 = randomNo(minimum,maximum);
                        r2 = randomNo(minimum,maximum);
                        outFile<<r1<<" "<<r2<<endl;
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
        }
        else
        {
            cout<<"Wrong Choice\n";
        }
    }
    else if(choose == 2)
    {
        cout<<"------------------------------[Weighted Graph]------------------------------\n";
        cout<<"Enter:- \n"<<"1. Number of Nodes : ";
        cin>>node;
        cout<<"2. Number Edges : ";
        cin>>edge;
        cout<<"3. Indexed from 1/0 : ";
        cin>>Indexed;
        cout<<"4. Print Number of Nodes and Edges before elements 1 for [Yes]/ 0 for [No] : ";
        cin>>printN;
        cout<<"1. Automatic\n"<<"2. User\n";
        cin>>choose1;
        if(choose1 == 1)
        {
            cout<<"------------------------------[AUTOMATIC]------------------------------\n";
            if(printN == 1)
            {
                outFile.open ("WeightedGraphAuto.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    outFile<<node<<" "<<edge<<"\n";
                    long long r1 = 0;
                    long long r2 = 0;
                    long long r3 = 0;
                    r1 = randomNo(1,1000);
                    r2 = randomNo(1,1000);
                    outFile<<r1<<" "<<Indexed<<" "<<r2<<endl;
                    for(long long j=1;j<edge;j++)
                    {
                        r1 = randomNo(1,1000);
                        r2 = randomNo(1,1000);
                        r3 = randomNo(1,1000);
                        outFile<<r1<<" "<<r2<<" "<<r3<<"\n";
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
            else
            {
                outFile.open ("WeightedGraphAuto.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    long long r1 = 0;
                    long long r2 = 0;
                    long long r3 = 0;
                    r1 = randomNo(1,1000);
                    r2 = randomNo(1,1000);
                    outFile<<r1<<" "<<Indexed<<" "<<r2<<endl;
                    for(long long j=1;j<edge;j++)
                    {
                        r1 = randomNo(1,1000);
                        r2 = randomNo(1,1000);
                        r3 = randomNo(1,1000);
                        outFile<<r1<<" "<<r2<<" "<<r3<<endl;
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }

        }
        else if(choose1 == 2)
        {
            cout<<"------------------------------[USER]------------------------------\n";
            cout<<"Enter :-\n";
            cout<<"1. Minumum value of Node : ";
            cin>>minimum;
            cout<<"2. Maximum value of Node : ";
            cin>>maximum;
            if(printN == 1)
            {
                outFile.open ("WeightedGraphUser.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    outFile<<node<<" "<<edge<<"\n";
                    long long r1 = 0;
                    long long r2 = 0;
                    long long r3 = 0;
                    r1 = randomNo(minimum,maximum);
                    r2 = randomNo(minimum,maximum);
                    outFile<<r1<<" "<<Indexed<<endl;
                    for(long long j=1;j<edge;j++)
                    {
                        r1 = randomNo(minimum,maximum);
                        r2 = randomNo(minimum,maximum);
                        r3 = randomNo(minimum,maximum);
                        outFile<<r1<<" "<<r2<<" "<<r3<<endl;
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
            else
            {
                outFile.open ("WeightedGraphUser.txt", ofstream::app);
                for(long long i=0;i<tc;i++)
                {
                    long long r1 = 0;
                    long long r2 = 0;
                    long long r3 = 0;
                    r1 = randomNo(minimum,maximum);
                    r2 = randomNo(minimum,maximum);
                    outFile<<r1<<Indexed<<r2<<endl;
                    for(long long j=1;j<edge;j++)
                    {
                        r1 = randomNo(minimum,maximum);
                        r2 = randomNo(minimum,maximum);
                        outFile<<r1<<" "<<r2<<endl;
                    }
                    outFile<<"\n";
                }
                outFile.close();
            }
        }
        else
        {
            cout<<"Wrong Choice\n";
        }
    }
    else
    {
        cout<<"Wrong Choice\n";
    }
}
int main()
{
    int option;
    cout<<"------------------------------[TEST CASE GENERATOR]------------------------------\n";
    do
    {
        cout<<"Choose from the options :-\n";
        cout<<"1.[Numbers]\n"<<"2. [Array]\n"<<"3. [String]\n"<<"4. [Tree]\n"<<"5. [Graph]\n"<<"6. [Exit]\n";
        cin>>option;
        if(option >0 && option<7)
        {
            if(option == 1)
            {
                numbers();
            }
            else if(option == 2)
            {
                generateArray();
            }
            else if(option == 3)
            {
                generateString();
            }
            else if(option == 4)
            {
                generateTree();
            }
            else if(option == 5)
            {
                generateGraph();
            }
        }
        else
        {
            cout<<"Please enter the right choice\n";
        }
    }while(option!=6);
}
