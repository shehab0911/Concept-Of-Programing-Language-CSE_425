#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <sys/time.h>

using namespace std;

long gettime()
{
    struct timeval startTime;
    gettimeofday(&startTime,NULL);

    return startTime.tv_sec*1000000+startTime.tv_usec;

}


int main ()
{
    start:
    string age;
    string sex;
    string cp;
    string trtbps;
    string chol;
    string fbs;
    string restecg;
    string thalachh;
    string exng;
    string oldpeak;
    string slp;
    string caa;
    string thall;
    string output;

    string ageinput;
    string sexinput;
    string cpinput;
    string trtbpsinput;
    string cholinput;
    string fbsinput;
    string restecginput;
    string thalachhinput;
    string exnginput;
    string oldpeakinput;
    string slpinput;
    string caainput;
    string thallinput;
    string outputinput;
    string choice1;
    string choice2;


    cout<<"Press 1 to searching \n";
    cout<<"Press 2 to sorting\n";
    cout<<"Press 3 to exit\n";

    cin>> choice1;

    if (choice1 == "1")
    {
        cout<<"Press 1 to search age\n";
        cout<<"Press 2 to search sex\n";
        cout<<"Press 3 to search cp\n";
        cout<<"Press 4 to search trtbps\n";
        cout<<"Press 5 to search chol\n";
        cout<<"Press 6 to search fbs\n";
        cout<<"Press 7 to search restecg\n";
        cout<<"Press 8 to search thalachh\n";
        cout<<"Press 9 to search exng\n";
        cout<<"Press 10 to search oldpeak\n";
        cout<<"Press 11 to search slp\n";
        cout<<"Press 12 to search caa\n";
        cout<<"Press 13 to search thall\n";
        cout<<"Press 14 to search output\n";


        cin>> choice2;

        if (choice2 == "1")
        {
            ifstream csv("heart.csv");
            if(!csv.is_open())
                std::cout << "ERROR OPENING FILE" << '\n';

            cout<<"Enter age\n";
            cin>> ageinput;

            long startTime1 = gettime();

            cout<<"Age  Sex  Cp Trtbps  Chol  Fbs  Restecg  Thalachh  Exng  Output   Slp    Caa    Thall  Oldpeak\n";
            while(csv.good())
            {
                getline(csv,age,',');
                getline(csv,sex,',');
                getline(csv,cp,',');
                getline(csv,trtbps,',');
                getline(csv,chol,',');
                getline(csv,fbs,',');
                getline(csv,restecg,',');
                getline(csv,thalachh,',');
                getline(csv,exng, ',');
                getline(csv,oldpeak,',');
                getline(csv,slp,',');
                getline(csv,caa,',');
                getline(csv,thall,',');
                getline(csv,output,'\n');

                if (ageinput == age)
                {
                    std::cout<<age <<"    "<<sex<< "    " <<cp<<"   "<<trtbps<<"    " <<chol<<"   "<<fbs<<"    "<<restecg<< "        " << thalachh<<"       "<<exng<<"     "<<output<<"        "<<slp<< "      " <<caa<<"      "<<thall<<"       "<<oldpeak<< '\n';
                }
            }

            long EndTime1 = gettime();
            cout<<"For searching Time="<< EndTime1-startTime1<<"ms" <<'\n';

            csv.close();
        }


        else if (choice2 == "2")
        {
            ifstream csv("heart.csv");
            if(!csv.is_open())
                std::cout << "ERROR OPENING FILE" << '\n';

            cout<<"Enter sex\n";
            cin>> sexinput;

            long startTime2 = gettime();
            cout<<"Age  Sex  Cp Trtbps  Chol  Fbs  Restecg  Thalachh  Exng  Output   Slp    Caa    Thall  Oldpeak\n";

            while(csv.good())
            {
                getline(csv,age,',');
                getline(csv,sex,',');
                getline(csv,cp,',');
                getline(csv,trtbps,',');
                getline(csv,chol,',');
                getline(csv,fbs,',');
                getline(csv,restecg,',');
                getline(csv,thalachh,',');
                getline(csv,exng, ',');
                getline(csv,oldpeak,',');
                getline(csv,slp,',');
                getline(csv,caa,',');
                getline(csv,thall,',');
                getline(csv,output,'\n');

                if (sexinput == sex)
                {
                    std::cout<<age <<"    "<<sex<< "    " <<cp<<"   "<<trtbps<<"    " <<chol<<"   "<<fbs<<"    "<<restecg<< "        " << thalachh<<"       "<<exng<<"     "<<output<<"        "<<slp<< "      " <<caa<<"      "<<thall<<"       "<<oldpeak<< '\n';
                }
            }

            long EndTime2 = gettime();
            cout<<"For searching Time="<< EndTime2-startTime2<<"ns" <<'\n';
            csv.close();
        }



        else if (choice2 == "3")
        {
            ifstream csv("heart.csv");
            if(!csv.is_open())
                std::cout << "ERROR OPENING FILE" << '\n';

            cout<<"Enter cp\n";
            cin>> cpinput;

            long startTime3 = gettime();
            cout<<"Age  Sex  Cp Trtbps  Chol  Fbs  Restecg  Thalachh  Exng  Output   Slp    Caa    Thall  Oldpeak\n";

            while(csv.good())
            {
                getline(csv,age,',');
                getline(csv,sex,',');
                getline(csv,cp,',');
                getline(csv,trtbps,',');
                getline(csv,chol,',');
                getline(csv,fbs,',');
                getline(csv,restecg,',');
                getline(csv,thalachh,',');
                getline(csv,exng, ',');
                getline(csv,oldpeak,',');
                getline(csv,slp,',');
                getline(csv,caa,',');
                getline(csv,thall,',');
                getline(csv,output,'\n');

                if (cpinput == cp)
                {
                    std::cout<<age <<"    "<<sex<< "    " <<cp<<"   "<<trtbps<<"    " <<chol<<"   "<<fbs<<"    "<<restecg<< "        " << thalachh<<"       "<<exng<<"     "<<output<<"        "<<slp<< "      " <<caa<<"      "<<thall<<"       "<<oldpeak<< '\n';
                }
            }

            long EndTime3 = gettime();
            cout<<"For searching Time="<< EndTime3-startTime3<<"ns" <<'\n';
            csv.close();
        }


        else if (choice2 == "4")
        {
            ifstream csv("heart.csv");
            if(!csv.is_open())
                std::cout << "ERROR OPENING FILE" << '\n';

            cout<<"Enter trtbps\n";
            cin>> trtbpsinput;

            long startTime4 = gettime();
            cout<<"Age  Sex  Cp Trtbps  Chol  Fbs  Restecg  Thalachh  Exng  Output   Slp    Caa    Thall  Oldpeak\n";

            while(csv.good())
            {
                getline(csv,age,',');
                getline(csv,sex,',');
                getline(csv,cp,',');
                getline(csv,trtbps,',');
                getline(csv,chol,',');
                getline(csv,fbs,',');
                getline(csv,restecg,',');
                getline(csv,thalachh,',');
                getline(csv,exng, ',');
                getline(csv,oldpeak,',');
                getline(csv,slp,',');
                getline(csv,caa,',');
                getline(csv,thall,',');
                getline(csv,output,'\n');

                if (trtbpsinput == trtbps)
                {
                    std::cout<<age <<"    "<<sex<< "    " <<cp<<"   "<<trtbps<<"    " <<chol<<"   "<<fbs<<"    "<<restecg<< "        " << thalachh<<"       "<<exng<<"     "<<output<<"        "<<slp<< "      " <<caa<<"      "<<thall<<"       "<<oldpeak<< '\n';
                }
            }

            long EndTime4 = gettime();
            cout<<"For searching Time="<< EndTime4-startTime4<<"ns" <<'\n';
        csv.close();
        }

        else if (choice2 == "5")
        {
            ifstream csv("heart.csv");
            if(!csv.is_open())
                std::cout << "ERROR OPENING FILE" << '\n';

            cout<<"Enter chol\n";
            cin>> cholinput;

            long startTime5 = gettime();
            cout<<"Age  Sex  Cp Trtbps  Chol  Fbs  Restecg  Thalachh  Exng  Output   Slp    Caa    Thall  Oldpeak\n";
            while(csv.good())
            {
                getline(csv,age,',');
                getline(csv,sex,',');
                getline(csv,cp,',');
                getline(csv,trtbps,',');
                getline(csv,chol,',');
                getline(csv,fbs,',');
                getline(csv,restecg,',');
                getline(csv,thalachh,',');
                getline(csv,exng, ',');
                getline(csv,oldpeak,',');
                getline(csv,slp,',');
                getline(csv,caa,',');
                getline(csv,thall,',');
                getline(csv,output,'\n');

                if (cholinput == chol)
                {
                    std::cout<<age <<"    "<<sex<< "    " <<cp<<"   "<<trtbps<<"    " <<chol<<"   "<<fbs<<"    "<<restecg<< "        " << thalachh<<"       "<<exng<<"     "<<output<<"        "<<slp<< "      " <<caa<<"      "<<thall<<"       "<<oldpeak<< '\n';
                }
            }

            long EndTime5 = gettime();
            cout<<"For searching Time="<< EndTime5-startTime5<<"ns" <<'\n';
            csv.close();
        }


        else if (choice2 == "6")
        {
            ifstream csv("heart.csv");
            if(!csv.is_open())
                std::cout << "ERROR OPENING FILE" << '\n';

            cout<<"Enter fbs\n";
            cin>> fbsinput;

            long startTime6 = gettime();
            cout<<"Age  Sex  Cp Trtbps  Chol  Fbs  Restecg  Thalachh  Exng  Output   Slp    Caa    Thall  Oldpeak\n";

            while(csv.good())
            {
                getline(csv,age,',');
                getline(csv,sex,',');
                getline(csv,cp,',');
                getline(csv,trtbps,',');
                getline(csv,chol,',');
                getline(csv,fbs,',');
                getline(csv,restecg,',');
                getline(csv,thalachh,',');
                getline(csv,exng, ',');
                getline(csv,oldpeak,',');
                getline(csv,slp,',');
                getline(csv,caa,',');
                getline(csv,thall,',');
                getline(csv,output,'\n');

                if (fbsinput == fbs)
                {
                    std::cout<<age <<"    "<<sex<< "    " <<cp<<"   "<<trtbps<<"    " <<chol<<"   "<<fbs<<"    "<<restecg<< "        " << thalachh<<"       "<<exng<<"     "<<output<<"        "<<slp<< "      " <<caa<<"      "<<thall<<"       "<<oldpeak<< '\n';
                }
            }

            long EndTime6 = gettime();
            cout<<"For searching Time="<< EndTime6-startTime6<<"ns" <<'\n';
            csv.close();
        }



        else if (choice2 == "7")
        {
            ifstream csv("heart.csv");
            if(!csv.is_open())
                std::cout << "ERROR OPENING FILE" << '\n';

            cout<<"Enter restecg\n";
            cin>> restecginput;

            long startTime7 = gettime();
            cout<<"Age  Sex  Cp Trtbps  Chol  Fbs  Restecg  Thalachh  Exng  Output   Slp    Caa    Thall  Oldpeak\n";

            while(csv.good())
            {
                getline(csv,age,',');
                getline(csv,sex,',');
                getline(csv,cp,',');
                getline(csv,trtbps,',');
                getline(csv,chol,',');
                getline(csv,fbs,',');
                getline(csv,restecg,',');
                getline(csv,thalachh,',');
                getline(csv,exng, ',');
                getline(csv,oldpeak,',');
                getline(csv,slp,',');
                getline(csv,caa,',');
                getline(csv,thall,',');
                getline(csv,output,'\n');

                if (restecginput == restecg)
                {
                    std::cout<<age <<"    "<<sex<< "    " <<cp<<"   "<<trtbps<<"    " <<chol<<"   "<<fbs<<"    "<<restecg<< "        " << thalachh<<"       "<<exng<<"     "<<output<<"        "<<slp<< "      " <<caa<<"      "<<thall<<"       "<<oldpeak<< '\n';
                }
            }

            long EndTime7 = gettime();
            cout<<"For searching Time="<< EndTime7-startTime7<<"ns" <<'\n';
            csv.close();
        }


        else if (choice2 == "8")
        {
            ifstream csv("heart.csv");
            if(!csv.is_open())
                std::cout << "ERROR OPENING FILE" << '\n';

            cout<<"Enter thalachh\n";

            long startTime8 = gettime();
            cin>> thalachhinput;
            cout<<"Age  Sex  Cp Trtbps  Chol  Fbs  Restecg  Thalachh  Exng  Output   Slp    Caa    Thall  Oldpeak\n";

            while(csv.good())
            {
                getline(csv,age,',');
                getline(csv,sex,',');
                getline(csv,cp,',');
                getline(csv,trtbps,',');
                getline(csv,chol,',');
                getline(csv,fbs,',');
                getline(csv,restecg,',');
                getline(csv,thalachh,',');
                getline(csv,exng, ',');
                getline(csv,oldpeak,',');
                getline(csv,slp,',');
                getline(csv,caa,',');
                getline(csv,thall,',');
                getline(csv,output,'\n');

                if (thalachhinput == thalachh)
                {
                    std::cout<<age <<"    "<<sex<< "    " <<cp<<"   "<<trtbps<<"    " <<chol<<"   "<<fbs<<"    "<<restecg<< "        " << thalachh<<"       "<<exng<<"     "<<output<<"        "<<slp<< "      " <<caa<<"      "<<thall<<"       "<<oldpeak<< '\n';
                }
            }

            long EndTime8 = gettime();
            cout<<"For searching Time="<< EndTime8-startTime8<<"ns" <<'\n';
            csv.close();
        }

        else if (choice2 == "9")
        {
            ifstream csv("heart.csv");
            if(!csv.is_open())
                std::cout << "ERROR OPENING FILE" << '\n';

            cout<<"Enter exng\n";

            long startTime9 = gettime();
            cin>> exnginput;
            cout<<"Age  Sex  Cp Trtbps  Chol  Fbs  Restecg  Thalachh  Exng  Output   Slp    Caa    Thall  Oldpeak\n";

            while(csv.good())
            {
                getline(csv,age,',');
                getline(csv,sex,',');
                getline(csv,cp,',');
                getline(csv,trtbps,',');
                getline(csv,chol,',');
                getline(csv,fbs,',');
                getline(csv,restecg,',');
                getline(csv,thalachh,',');
                getline(csv,exng, ',');
                getline(csv,oldpeak,',');
                getline(csv,slp,',');
                getline(csv,caa,',');
                getline(csv,thall,',');
                getline(csv,output,'\n');

                if (exnginput == exng)
                {
                    std::cout<<age <<"    "<<sex<< "    " <<cp<<"   "<<trtbps<<"    " <<chol<<"   "<<fbs<<"    "<<restecg<< "        " << thalachh<<"       "<<exng<<"     "<<output<<"        "<<slp<< "      " <<caa<<"      "<<thall<<"       "<<oldpeak<< '\n';
                }
            }

            long EndTime9 = gettime();
            cout<<"For searching Time="<< EndTime9-startTime9<<"ns" <<'\n';
            csv.close();
        }


        else if (choice2 == "10")
        {
            ifstream csv("heart.csv");
            if(!csv.is_open())
                std::cout << "ERROR OPENING FILE" << '\n';

            cout<<"Enter oldpeak\n";

            long startTime10 = gettime();
            cin>> oldpeakinput;
            cout<<"Age  Sex  Cp Trtbps  Chol  Fbs  Restecg  Thalachh  Exng  Output   Slp    Caa    Thall  Oldpeak\n";

            while(csv.good())
            {
                getline(csv,age,',');
                getline(csv,sex,',');
                getline(csv,cp,',');
                getline(csv,trtbps,',');
                getline(csv,chol,',');
                getline(csv,fbs,',');
                getline(csv,restecg,',');
                getline(csv,thalachh,',');
                getline(csv,exng, ',');
                getline(csv,oldpeak,',');
                getline(csv,slp,',');
                getline(csv,caa,',');
                getline(csv,thall,',');
                getline(csv,output,'\n');

                if (oldpeakinput == oldpeak)
                {
                    std::cout<<age <<"    "<<sex<< "    " <<cp<<"   "<<trtbps<<"    " <<chol<<"   "<<fbs<<"    "<<restecg<< "        " << thalachh<<"       "<<exng<<"     "<<output<<"        "<<slp<< "      " <<caa<<"      "<<thall<<"       "<<oldpeak<< '\n';
                }
            }

            long EndTime10 = gettime();
            cout<<"For searching Time="<< EndTime10-startTime10<<"ns" <<'\n';
            csv.close();
        }



        else if (choice2 == "11")
        {
            ifstream csv("heart.csv");
            if(!csv.is_open())
                std::cout << "ERROR OPENING FILE" << '\n';

            cout<<"Enter slp\n";
            cin>> slpinput;

            long startTime11 = gettime();
            cout<<"Age  Sex  Cp Trtbps  Chol  Fbs  Restecg  Thalachh  Exng  Output   Slp    Caa    Thall  Oldpeak\n";

            while(csv.good())
            {
                getline(csv,age,',');
                getline(csv,sex,',');
                getline(csv,cp,',');
                getline(csv,trtbps,',');
                getline(csv,chol,',');
                getline(csv,fbs,',');
                getline(csv,restecg,',');
                getline(csv,thalachh,',');
                getline(csv,exng, ',');
                getline(csv,oldpeak,',');
                getline(csv,slp,',');
                getline(csv,caa,',');
                getline(csv,thall,',');
                getline(csv,output,'\n');

                if (slpinput == slp)
                {
                    std::cout<<age <<"    "<<sex<< "    " <<cp<<"   "<<trtbps<<"    " <<chol<<"   "<<fbs<<"    "<<restecg<< "        " << thalachh<<"       "<<exng<<"     "<<output<<"        "<<slp<< "      " <<caa<<"      "<<thall<<"       "<<oldpeak<< '\n';
                }
            }

            long EndTime11 = gettime();
            cout<<"For searching Time="<< EndTime11-startTime11<<"ns" <<'\n';
            csv.close();
        }


        else if (choice2 == "12")
        {
            ifstream csv("heart.csv");
            if(!csv.is_open())
                std::cout << "ERROR OPENING FILE" << '\n';

            cout<<"Enter caa\n";
            cin>> caainput;

            long startTime12 = gettime();
            cout<<"Age  Sex  Cp Trtbps  Chol  Fbs  Restecg  Thalachh  Exng  Output   Slp    Caa    Thall  Oldpeak\n";

            while(csv.good())
            {
                getline(csv,age,',');
                getline(csv,sex,',');
                getline(csv,cp,',');
                getline(csv,trtbps,',');
                getline(csv,chol,',');
                getline(csv,fbs,',');
                getline(csv,restecg,',');
                getline(csv,thalachh,',');
                getline(csv,exng, ',');
                getline(csv,oldpeak,',');
                getline(csv,slp,',');
                getline(csv,caa,',');
                getline(csv,thall,',');
                getline(csv,output,'\n');

                if (caainput == caa)
                {
                    std::cout<<age <<"    "<<sex<< "    " <<cp<<"   "<<trtbps<<"    " <<chol<<"   "<<fbs<<"    "<<restecg<< "        " << thalachh<<"       "<<exng<<"     "<<output<<"        "<<slp<< "      " <<caa<<"      "<<thall<<"       "<<oldpeak<< '\n';
                }
            }

            long EndTime12 = gettime();
            cout<<"For searching Time="<< EndTime12-startTime12<<"ns" <<'\n';
            csv.close();
        }

        else if (choice2 == "13")
        {
            ifstream csv("heart.csv");
            if(!csv.is_open())
                std::cout << "ERROR OPENING FILE" << '\n';

            cout<<"Enter thall\n";
            cin>> thallinput;

            long startTime13 = gettime();
            cout<<"Age  Sex  Cp Trtbps  Chol  Fbs  Restecg  Thalachh  Exng  Output   Slp    Caa    Thall  Oldpeak\n";

            while(csv.good())
            {
                getline(csv,age,',');
                getline(csv,sex,',');
                getline(csv,cp,',');
                getline(csv,trtbps,',');
                getline(csv,chol,',');
                getline(csv,fbs,',');
                getline(csv,restecg,',');
                getline(csv,thalachh,',');
                getline(csv,exng, ',');
                getline(csv,oldpeak,',');
                getline(csv,slp,',');
                getline(csv,caa,',');
                getline(csv,thall,',');
                getline(csv,output,'\n');

                if (thallinput == thall)
                {
                    std::cout<<age <<"    "<<sex<< "    " <<cp<<"   "<<trtbps<<"    " <<chol<<"   "<<fbs<<"    "<<restecg<< "        " << thalachh<<"       "<<exng<<"     "<<output<<"        "<<slp<< "      " <<caa<<"      "<<thall<<"       "<<oldpeak<< '\n';
                }
            }

            long EndTime13 = gettime();
            cout<<"For searching Time="<< EndTime13-startTime13<<"ns" <<'\n';
            csv.close();
        }


        else if (choice2 == "14")
        {
            ifstream csv("heart.csv");
            if(!csv.is_open())
                std::cout << "ERROR OPENING FILE" << '\n';

            cout<<"Enter output\n";
            cin>> outputinput;

            long startTime14 = gettime();
            cout<<"Age  Sex  Cp Trtbps  Chol  Fbs  Restecg  Thalachh  Exng  Output   Slp    Caa    Thall  Oldpeak\n";

            while(csv.good())
            {
                getline(csv,age,',');
                getline(csv,sex,',');
                getline(csv,cp,',');
                getline(csv,trtbps,',');
                getline(csv,chol,',');
                getline(csv,fbs,',');
                getline(csv,restecg,',');
                getline(csv,thalachh,',');
                getline(csv,exng, ',');
                getline(csv,oldpeak,',');
                getline(csv,slp,',');
                getline(csv,caa,',');
                getline(csv,thall,',');
                getline(csv,output,'\n');

                if (outputinput == output)
                {
                    std::cout<<age <<"    "<<sex<< "    " <<cp<<"   "<<trtbps<<"    " <<chol<<"   "<<fbs<<"    "<<restecg<< "        " << thalachh<<"       "<<exng<<"     "<<output<<"        "<<slp<< "      " <<caa<<"      "<<thall<<"       "<<oldpeak<< '\n';
                }
            }

            long EndTime14 = gettime();
            cout<<"For searching Time="<< EndTime14-startTime14<<"ns" <<'\n';
            csv.close();
        }

        else
        {
             cout<<"Invalid Input\n";
        }




        goto start;
    }


     else if (choice1 == "2")
        {
            vector<string> Cage;
            vector<string> Csex;
            vector<string> Ccp;
            vector<string> Ctrtbps;
            vector<string> Cchol;
            vector<string> Cfbs;
            vector<string> Crestecg;
            vector<string> Cthalachh;
            vector<string> Cexng;
            vector<string> Coldpeak;
            vector<string> Cslp;
            vector<string> Ccaa;
            vector<string> Cthall;
            vector<string> Coutput;

            int i,j;
            string Tage;
            string Tsex;
            string Tcp;
            string Ttrtbps;
            string Tchol;
            string Tfbs;
            string Trestecg;
            string Tthalachh;
            string Texng;
            string Toldpeak;
            string Tslp;
            string Tcaa;
            string Tthall;
            string Toutput;


            ifstream csv("heart.csv");
            if(!csv.is_open())
                std::cout << "ERROR OPENING FILE" << '\n';


            while(csv.good())
            {
                getline(csv,age,',');
                getline(csv,sex,',');
                getline(csv,cp,',');
                getline(csv,trtbps,',');
                getline(csv,chol,',');
                getline(csv,fbs,',');
                getline(csv,restecg,',');
                getline(csv,thalachh,',');
                getline(csv,exng, ',');
                getline(csv,oldpeak,',');
                getline(csv,slp,',');
                getline(csv,caa,',');
                getline(csv,thall,',');
                getline(csv,output,'\n');

                Cage.push_back(age);
                Csex.push_back(sex);
                Ccp.push_back(cp);
                Ctrtbps.push_back(trtbps);
                Cchol.push_back(chol);
                Cfbs.push_back(fbs);
                Crestecg.push_back(restecg);
                Cthalachh.push_back(thalachh);
                Cexng.push_back(exng);
                Coldpeak.push_back(oldpeak);
                Cslp.push_back(slp);
                Ccaa.push_back(caa);
                Cthall.push_back(thall);
                Coutput.push_back(output);

            }
            csv.close();



            string choice3;
            cout<<"Press 1 to Ascending Order\n";
            cout<<"Press 2 to Descending Order\n";

            cin>> choice2;

            if(choice2 =="1")
            {
                cout<<"Press 1 to sort age\n";
                cout<<"Press 2 to sort sex\n";
                cout<<"Press 3 to sort cp\n";
                cout<<"Press 4 to sort trtbps\n";
                cout<<"Press 5 to sort chol\n";
                cout<<"Press 6 to sort fbs\n";
                cout<<"Press 7 to sort restecg\n";
                cout<<"Press 8 to sort thalachh\n";
                cout<<"Press 9 to sort exng\n";
                cout<<"Press 10 to sort oldpeak\n";
                cout<<"Press 11 to sort slp\n";
                cout<<"Press 12 to sort caa\n";
                cout<<"Press 13 to sort thall\n";
                cout<<"Press 14 to sort output\n";

                cin>> choice3;

                if(choice3=="1")
                {
                    long startTime21 = gettime();
                    for(i=0;i<Cage.size()-1;i++)
                    {
                        for(j=0;j<Cage.size()-i-1;j++)
                        {
                            if(Cage[j]>Cage[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                     cout<<"Age  Sex  Cp Trtbps  Chol  Fbs  Restecg  Thalachh  Exng  Oldpeak   Slp    Caa    Thall  Output\n";

                    for (int k = 0; k < Cage.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime21 = gettime();
                    cout<<"For sorting Time="<< EndTime21-startTime21<<"ms" <<'\n';


                }

                else if (choice3 == "2")
                {
                    long startTime22 = gettime();
                    for(i=0;i<Csex.size()-1;i++)
                    {
                        for(j=0;j<Csex.size()-i-1;j++)
                        {
                            if(Csex[j]>Csex[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Csex.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';


                    long EndTime22 = gettime();
                    cout<<"For searching Time="<< EndTime22-startTime22<<"ns" <<'\n';
                }

                else if(choice3 == "3")
                {
                    long startTime23 = gettime();
                    for(i=0;i<Ccp.size()-1;i++)
                    {
                        for(j=0;j<Ccp.size()-i-1;j++)
                        {
                            if(Ccp[j]>Ccp[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Ccp.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime23 = gettime();
                    cout<<"For searching Time="<< EndTime23-startTime23<<"ns" <<'\n';

                }

                else if (choice3 == "4")
                {
                    long startTime24 = gettime();
                    for(i=0;i<Ctrtbps.size()-1;i++)
                    {
                        for(j=0;j<Ctrtbps.size()-i-1;j++)
                        {
                            if(Ctrtbps[j]>Ctrtbps[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Ctrtbps.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime24 = gettime();
                    cout<<"For searching Time="<< EndTime24-startTime24<<"ns" <<'\n';

                }

                else if(choice3 == "5")
                {
                    long startTime25 = gettime();
                    for(i=0;i<Cchol.size()-1;i++)
                    {
                        for(j=0;j<Cchol.size()-i-1;j++)
                        {
                            if(Cchol[j]>Cchol[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Cchol.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';


                    long EndTime25 = gettime();
                    cout<<"For searching Time="<< EndTime25-startTime25<<"ns" <<'\n';

                }

                else if (choice3 == "6")
                {
                    long startTime26 = gettime();
                    for(i=0;i<Cfbs.size()-1;i++)
                    {
                        for(j=0;j<Cfbs.size()-i-1;j++)
                        {
                            if(Cfbs[j]>Cfbs[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Cfbs.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';


                    long EndTime26 = gettime();
                    cout<<"For searching Time="<< EndTime26-startTime26<<"ns" <<'\n';
                }

                else if(choice3 == "7")
                {
                    long startTime27 = gettime();
                    for(i=0;i<Crestecg.size()-1;i++)
                    {
                        for(j=0;j<Crestecg.size()-i-1;j++)
                        {
                            if(Crestecg[j]>Crestecg[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Crestecg.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime27 = gettime();
                    cout<<"For searching Time="<< EndTime27-startTime27<<"ns" <<'\n';


                }

                else if (choice3 == "8")
                {
                    long startTime28 = gettime();
                    for(i=0;i<Cthalachh.size()-1;i++)
                    {
                        for(j=0;j<Cthalachh.size()-i-1;j++)
                        {
                            if(Cthalachh[j]>Cthalachh[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Cthalachh.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime28 = gettime();
                    cout<<"For searching Time="<< EndTime28-startTime28<<"ns" <<'\n';

                }

                else if(choice3 == "9")
                {
                    long startTime29 = gettime();
                    for(i=0;i<Cexng.size()-1;i++)
                    {
                        for(j=0;j<Cexng.size()-i-1;j++)
                        {
                            if(Cexng[j]>Cexng[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Cexng.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';


                    long EndTime29 = gettime();
                    cout<<"For searching Time="<< EndTime29-startTime29<<"ns" <<'\n';

                }

                else if (choice3 == "10")
                {
                    long startTime30 = gettime();
                    for(i=0;i<Coldpeak.size()-1;i++)
                    {
                        for(j=0;j<Coldpeak.size()-i-1;j++)
                        {
                            if(Coldpeak[j]>Coldpeak[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Coldpeak.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime30 = gettime();
                    cout<<"For searching Time="<< EndTime30-startTime30<<"ns" <<'\n';

                }

                else if(choice3 =="11")
                {
                    long startTime31 = gettime();
                    for(i=0;i<Cslp.size()-1;i++)
                    {
                        for(j=0;j<Cslp.size()-i-1;j++)
                        {
                            if(Cslp[j]>Cslp[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Cslp.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';


                    long EndTime31 = gettime();
                    cout<<"For searching Time="<< EndTime31-startTime31<<"ns" <<'\n';

                }

                else if (choice3== "12")
                {
                    long startTime32 = gettime();
                    for(i=0;i<Ccaa.size()-1;i++)
                    {
                        for(j=0;j<Ccaa.size()-i-1;j++)
                        {
                            if(Ccaa[j]>Ccaa[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Ccaa.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime32 = gettime();
                    cout<<"For searching Time="<< EndTime32-startTime32<<"ns" <<'\n';

                }

                else if(choice3 == "13")
                {
                    long startTime33 = gettime();
                    for(i=0;i<Cthall.size()-1;i++)
                    {
                        for(j=0;j<Cthall.size()-i-1;j++)
                        {
                            if(Cthall[j]>Cthall[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Cthall.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';


                    long EndTime33 = gettime();
                    cout<<"For searching Time="<< EndTime33-startTime33<<"ns" <<'\n';

                }

                else if (choice3 == "14")
                {
                    long startTime34 = gettime();
                    for(i=0;i<Coutput.size()-1;i++)
                    {
                        for(j=0;j<Coutput.size()-i-1;j++)
                        {
                            if(Coutput[j]>Coutput[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Coutput.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime34 = gettime();
                    cout<<"For searching Time="<< EndTime34-startTime34<<"ns" <<'\n';

                }

                else
                    cout<<"Invalid input\n";


                goto start;


            }


            else if(choice2 =="2")
            {
                cout<<"Press 1 to sort age\n";
                cout<<"Press 2 to sort sex\n";
                cout<<"Press 3 to sort cp\n";
                cout<<"Press 4 to sort trtbps\n";
                cout<<"Press 5 to sort chol\n";
                cout<<"Press 6 to sort fbs\n";
                cout<<"Press 7 to sort restecg\n";
                cout<<"Press 8 to sort thalachh\n";
                cout<<"Press 9 to sort exng\n";
                cout<<"Press 10 to sort oldpeak\n";
                cout<<"Press 11 to sort slp\n";
                cout<<"Press 12 to sort caa\n";
                cout<<"Press 13 to sort thall\n";
                cout<<"Press 14 to sort output\n";

                cin>> choice3;

                if(choice3=="1")
                {
                    long startTime41 = gettime();
                    for(i=0;i<Cage.size()-1;i++)
                    {
                        for(j=0;j<Cage.size()-i-1;j++)
                        {
                            if(Cage[j]<Cage[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Cage.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime41 = gettime();
                    cout<<"For searching Time="<< EndTime41-startTime41<<"ns" <<'\n';


                }

                else if (choice3 == "2")
                {
                    long startTime42 = gettime();
                    for(i=0;i<Csex.size()-1;i++)
                    {
                        for(j=0;j<Csex.size()-i-1;j++)
                        {
                            if(Csex[j]<Csex[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Csex.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';


                    long EndTime42 = gettime();
                    cout<<"For sorting Time="<< EndTime42-startTime42<<"ms" <<'\n';
                }

                else if(choice3 == "3")
                {
                    long startTime43 = gettime();
                    for(i=0;i<Ccp.size()-1;i++)
                    {
                        for(j=0;j<Ccp.size()-i-1;j++)
                        {
                            if(Ccp[j]<Ccp[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Ccp.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';


                    long EndTime43 = gettime();
                    cout<<"For searching Time="<< EndTime43-startTime43<<"ns" <<'\n';

                }

                else if (choice3 == "4")
                {
                    long startTime44 = gettime();
                    for(i=0;i<Ctrtbps.size()-1;i++)
                    {
                        for(j=0;j<Ctrtbps.size()-i-1;j++)
                        {
                            if(Ctrtbps[j]<Ctrtbps[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Ctrtbps.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime44 = gettime();
                    cout<<"For searching Time="<< EndTime44-startTime44<<"ns" <<'\n';

                }

                else if(choice3 == "5")
                {
                    long startTime45 = gettime();
                    for(i=0;i<Cchol.size()-1;i++)
                    {
                        for(j=0;j<Cchol.size()-i-1;j++)
                        {
                            if(Cchol[j]<Cchol[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Cchol.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime45 = gettime();
                    cout<<"For searching Time="<< EndTime45-startTime45<<"ns" <<'\n';


                }

                else if (choice3 == "6")
                {
                    long startTime46 = gettime();
                    for(i=0;i<Cfbs.size()-1;i++)
                    {
                        for(j=0;j<Cfbs.size()-i-1;j++)
                        {
                            if(Cfbs[j]<Cfbs[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Cfbs.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime46 = gettime();
                    cout<<"For searching Time="<< EndTime46-startTime46<<"ns" <<'\n';

                }

                else if(choice3 == "7")
                {
                    long startTime47 = gettime();
                    for(i=0;i<Crestecg.size()-1;i++)
                    {
                        for(j=0;j<Crestecg.size()-i-1;j++)
                        {
                            if(Crestecg[j]<Crestecg[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Crestecg.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime47 = gettime();
                    cout<<"For searching Time="<< EndTime47-startTime47<<"ns" <<'\n';


                }

                else if (choice3 == "8")
                {
                    long startTime48 = gettime();
                    for(i=0;i<Cthalachh.size()-1;i++)
                    {
                        for(j=0;j<Cthalachh.size()-i-1;j++)
                        {
                            if(Cthalachh[j]<Cthalachh[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Cthalachh.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';


                    long EndTime48 = gettime();
                    cout<<"For searching Time="<< EndTime48-startTime48<<"ns" <<'\n';
                }

                else if(choice3 == "9")
                {
                    long startTime49 = gettime();
                    for(i=0;i<Cexng.size()-1;i++)
                    {
                        for(j=0;j<Cexng.size()-i-1;j++)
                        {
                            if(Cexng[j]<Cexng[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Cexng.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime49 = gettime();
                    cout<<"For searching Time="<< EndTime49-startTime49<<"ns" <<'\n';


                }

                else if (choice3 == "10")
                {
                    long startTime50 = gettime();
                    for(i=0;i<Coldpeak.size()-1;i++)
                    {
                        for(j=0;j<Coldpeak.size()-i-1;j++)
                        {
                            if(Coldpeak[j]<Coldpeak[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Coldpeak.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime50 = gettime();
                    cout<<"For searching Time="<< EndTime50-startTime50<<"ns" <<'\n';

                }

                else if(choice3 =="11")
                {
                    long startTime51 = gettime();
                    for(i=0;i<Cslp.size()-1;i++)
                    {
                        for(j=0;j<Cslp.size()-i-1;j++)
                        {
                            if(Cslp[j]<Cslp[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Cslp.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';


                    long EndTime51 = gettime();
                    cout<<"For searching Time="<< EndTime51-startTime51<<"ns" <<'\n';

                }

                else if (choice3== "12")
                {
                    long startTime52 = gettime();
                    for(i=0;i<Ccaa.size()-1;i++)
                    {
                        for(j=0;j<Ccaa.size()-i-1;j++)
                        {
                            if(Ccaa[j]<Ccaa[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Ccaa.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime52 = gettime();
                    cout<<"For searching Time="<< EndTime52-startTime52<<"ns" <<'\n';

                }

                else if(choice3 == "13")
                {
                    long startTime53 = gettime();
                    for(i=0;i<Cthall.size()-1;i++)
                    {
                        for(j=0;j<Cthall.size()-i-1;j++)
                        {
                            if(Cthall[j]<Cthall[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Cthall.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime53 = gettime();
                    cout<<"For searching Time="<< EndTime53-startTime53<<"ns" <<'\n';


                }

                else if (choice3 == "14")
                {
                    long startTime54 = gettime();
                    for(i=0;i<Coutput.size()-1;i++)
                    {
                        for(j=0;j<Coutput.size()-i-1;j++)
                        {
                            if(Coutput[j]<Coutput[j+1])
                            {
                                Tage=Cage[j];
                                Cage[j]=Cage[j+1];
                                Cage[j+1]=Tage;

                                Tsex=Csex[j];
                                Csex[j]=Csex[j+1];
                                Csex[j+1]=Tsex;

                                Tcp=Ccp[j];
                                Ccp[j]=Ccp[j+1];
                                Ccp[j+1]=Tcp;

                                Ttrtbps=Ctrtbps[j];
                                Ctrtbps[j]=Ctrtbps[j+1];
                                Ctrtbps[j+1]=Ttrtbps;

                                Tchol=Cchol[j];
                                Cchol[j]=Cchol[j+1];
                                Cchol[j+1]=Tchol;

                                Tfbs=Cfbs[j];
                                Cfbs[j]=Cfbs[j+1];
                                Cfbs[j+1]=Tfbs;

                                Trestecg=Crestecg[j];
                                Crestecg[j]=Crestecg[j+1];
                                Crestecg[j+1]=Trestecg;

                                Tthalachh=Cthalachh[j];
                                Cthalachh[j]=Cthalachh[j+1];
                                Cthalachh[j+1]=Tthalachh;

                                Texng=Cexng[j];
                                Cexng[j]=Cexng[j+1];
                                Cexng[j+1]=Texng;

                                Toldpeak=Coldpeak[j];
                                Coldpeak[j]=Coldpeak[j+1];
                                Coldpeak[j+1]=Toldpeak;

                                Tslp=Cslp[j];
                                Cslp[j]=Cslp[j+1];
                                Cslp[j+1]=Tslp;

                                Tcaa=Ccaa[j];
                                Ccaa[j]=Ccaa[j+1];
                                Ccaa[j+1]=Tcaa;

                                Tthall=Cthall[j];
                                Cthall[j]=Cthall[j+1];
                                Cthall[j+1]=Tthall;

                                Toutput=Coutput[j];
                                Coutput[j]=Coutput[j+1];
                                Coutput[j+1]=Toutput;

                            }
                        }
                    }

                    Cage.pop_back();
                    Csex.pop_back();
                    Ccp.pop_back();
                    Ctrtbps.pop_back();
                    Cchol.pop_back();
                    Cfbs.pop_back();
                    Crestecg.pop_back();
                    Cthalachh.pop_back();
                    Cexng.pop_back();
                    Coldpeak.pop_back();
                    Cslp.pop_back();
                    Ccaa.pop_back();
                    Cthall.pop_back();
                    Coutput.pop_back();

                    for (int k = 0; k < Coutput.size(); k++)
                    cout <<Cage[k]<<"     "<<Csex[k]<<"     "<<Ccp[k]<<"     "<<Ctrtbps[k]<<"     "<<Cchol[k]<<"     "<<Cfbs[k]<<"     "<<Crestecg[k]<<"     "<<Cthalachh[k]<<"     "<<Cexng[k]<<"     "<<Coldpeak[k]<<"     "<<Cslp[k]<<"     "<<Ccaa[k]<<"     "<<Cthall[k]<<"     "<<Coutput[k]<< '\n';

                    long EndTime54 = gettime();
                    cout<<"For searching Time="<< EndTime54-startTime54<<"ns" <<'\n';

                }

                else
                    cout<<"Invalid input\n";

                goto start;
            }

            else
            {
                cout<<"Invalid input\n";
            }


            goto start;
        }



    else if (choice1 == "3")
    {
        exit(0);
    }

    else
    {
        cout<<"Invalid input\n";
        goto start;
    }


}





