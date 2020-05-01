#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

class construction
{
private:

	int b,ce,s,l,sa;													//Constant Price Variables
	
	int mt,tcwb,tcwob,month;int bricks;int cement;int stone;int labor;int contracter,sand;				// Data Variables
	
	//Plot Variables
	int location;int plot;
	int nma,np,na;
	int size;
	int mughees;
	//Story Variables
	int biryanicost;
	int biryani;
	char ch;
public:

	void data();
	void marla();
	void story();
	void menu();
};
int main()
{
	fstream out;																			//File Open
	out.open("construction.doc", ios::out |ios::app |ios::in |ios::binary);
	cout<<"\n\n\t\t\t !*************************************************!";
	cout<<"\n\t\t\t   ***# WELCOME TO THE SERVER CONSTRUCTIONS #***";
	cout<<"\n\t\t\t !*************************************************!";
	cout<<"\n\n\t\t\t\t #!!!$ THE MAIN MENU #!!!$ ";
	
	out<<" !*************************************************!"<<endl;
	out<<"   ***# WELCOME TO THE SERVER CONSTRUCTIONS #***"<<endl;
	out<<" !*************************************************!"<<endl;
	out<<" #!!!$ THE MAIN MENU #!!!$ "<<endl;
	

	construction obj;
while(1)
	{
	obj.menu();
	}
out.close();																			//File Close
getch();																																					
}

void construction::menu(void)
{
	fstream out;
	out.open("construction.doc", ios::out |ios::app |ios::in |ios::binary);
	cout<<"\n\n Press D.For Data Entry \n Press P.For Plot Prize \n Press S.For Story \n Press E.To Stop \n\n\t\t\t Enter Your Choice::: \n";
	out<<" Press D.For Data Entry \n Press P.For Plot Prize \n Press S.For Story \n Press E.To Stop \n\n\t\t\t Enter Your Choice:::"<<endl;
	cin>>ch;
	out<<ch<<endl;
	if(ch=='D')
	{data();}
	else if(ch=='P')
	{marla();}
	else if(ch=='S')
	{story();}
	else if(ch=='E')
	{
		cout<<"nd of program";
		out<<endl;
		out<<"nd of program";
		exit(0);}
	else
	{cout<<" \n\t\t Error!!! \n\t\t Run The Program Again";}

	out.close();
}

void construction::data(void)
{
		fstream out;
	out.open("construction.doc", ios::out |ios::app |ios::in |ios::binary);
cout<<"\n\t\t #----- \" MATERIAL REQUIRED PRIZE ENTERY SECTION " " -----# \n";
cout<<" \n Enter Now-a-Days Price of Bricks = Rs: ";cin>>bricks;													// Rs 8
cout<<" Enter Now-a-Days Price of Cement Per Bag = Rs: ";cin>>cement;												// Rs 550			
cout<<" Enter Now-a-Days Price of Stone Per Foot = Rs: ";cin>>stone;												// Rs 65
cout<<" Enter Now-a-Days Price of Sand Per Foot = Rs: ";cin>>sand;													// Rs 24
cout<<" Enter Now-a-Days Labor Cost Per Labor Per Month = Rs: ";cin>>labor;											// Rs 1,200
cout<<" Enter Now-a-Days Contracter Cost = Rs: ";cin>>contracter;													// Rs 100,000
cout<<" Enter Biryani Cost Per Dage = Rs: ";cin>>biryanicost;														// Rs 5,000

out<<" #----- \" MATERIAL REQUIRED PRIZE ENTERY SECTION " " -----# "<<endl;
out<<" Enter Now-a-Days Price of Bricks = Rs: "<<endl;out<<bricks<<endl;													// Rs 8
out<<" Enter Now-a-Days Price of Cement Per Bag = Rs: "<<endl;out<<cement<<endl;											// Rs 550			
out<<" Enter Now-a-Days Price of Stone Per Foot = Rs: "<<endl;out<<stone<<endl;												// Rs 65
out<<" Enter Now-a-Days Price of Sand Per Foot = Rs: "<<endl;out<<sand<<endl;												// Rs 24
out<<" Enter Now-a-Days Labor Cost Per Labor Per Month = Rs: "<<endl;out<<labor<<endl;										// Rs 1,200
out<<" Enter Now-a-Days Contracter Cost = Rs: "<<endl;out<<contracter<<endl;												// Rs 100,000
out<<" Enter Biryani Cost Per Dage = Rs: "<<endl;out<<biryanicost<<endl;													// Rs 5,000


cout<<" \n Enter Time In Which You Want Your House To Be Completed(In Months): ";cin>>month;
out<<"  Enter Time In Which You Want Your House To Be Completed(In Months): "<<endl;out<<month<<endl;

mt=bricks+cement+stone+labor+contracter+biryanicost;
out<<mt<<endl;

cout<<" \n\t\t ******************************** ";
cout<<" \n\t\t Total Material Cost = Rs: "<<mt;
cout<<" \n\t\t ******************************** ";

out<<"  ******************************** "<<endl;
out<<"  Total Material Cost = Rs: "<<endl;out<<mt;
out<<"  ******************************** "<<endl;

out.close();
}
																													//Plot Prize
void construction::marla(void)
	{
		fstream out;
		out.open("construction.doc", ios::out |ios::app |ios::in |ios::binary);
		
		cout<<"\n\t\t #----- \" PLOT PRIZE SECTION " " -----# \n";
		out<<" #----- \" PLOT PRIZE SECTION " " -----# "<<endl;
	
	cout<<" \n Select Your Plot Location:: \n";cout<<" \n 1. For Plot Near Market Area ... \n";cout<<" 2. For Plot Near Park .... \n";cout<<" 3. For Plot At Normal Location ... \n";cin>>location;
	out<<" Select Your Plot Location:: "<<endl;out<<"  1. For Plot Near Market Area ... "<<endl;out<<" 2. For Plot Near Park .... "<<endl;out<<" 3. For Plot At Normal Location ... "<<endl;out<<location;

	switch(location)
	{
																													//FIRST
	case 1:	
	{cout<<" \n Enter Price For Plot Near Market Area Per Square Feet = Rs: ";cin>>nma;
	out<<"  Enter Price For Plot Near Market Area Per Square Feet = Rs: "<<endl<<out<<nma;
	cout<<" \n\n Select The Size of Your House:"<<endl;cout<<" 5...  For 5 Marla( 24 x 45 = 1,125 Feet ) : "<< "\n" <<" 10... For 10 Marla( 2,250 Feet ) :\n ";cin>>size;
	out<<"  Select The Size of Your House:"<<endl;out<<" 5...  For 5 Marla( 24 x 45 = 1,125 Feet ) : "<<endl;  out<<" 10... For 10 Marla( 2,250 Feet ) : "<<endl;out<<size;
	if(size==5)
	{mughees=5*nma;																									//mughees=total cost of the plot
		cout<<" \n\t\t ************************************************************ ";
		cout<<" \n\t\t #'Price of 5 Marla Plot Near Market Area Is = Rs: "<<mughees;
		cout<<" \n\t\t *********************************************************** ";
		out<<"  ************************************************************ "<<endl;
		out<<"  #'Price of 5 Marla Plot Near Market Area Is = Rs: "<<endl<<out<<mughees;
		out<<"  *********************************************************** "<<endl;

		break;}
	else if(size==10)
	{mughees=10*nma;
		cout<<" \n\t\t ************************************************************* ";
		cout<<" \n\t\t #'Price of 10 Marla Plot Near Market Area Is = Rs: "<<mughees;
		cout<<" \n\t\t ************************************************************ ";

		out<<"  ************************************************************* "<<endl;
		out<<"  #'Price of 10 Marla Plot Near Market Area Is = Rs: "<<endl<<out<<mughees<<endl;
		out<<"  ************************************************************ "<<endl;
		
		break;}
																												//TWO
	case 2:	
	{cout<<" \n Enter Price For Plot Near Park Area Per Square Feet = Rs: ";cin>>np;
	out<<"  Enter Price For Plot Near Park Area Per Square Feet = Rs: "<<endl;out<<np;
	
	cout<<" \n Select The Size of Your House: \n\n";cout<<" 5...  For 5 Marla( 24 x 45 = 1,125 Feet ) : "<< "\n" <<" 10... For 10 Marla( 2,250 Feet ) :\n ";cin>>size;
	out<<"  Select The Size of Your House: "<<endl;out<<" 5...  For 5 Marla( 24 x 45 = 1,125 Feet ) : "<<endl;  out<<" 10... For 10 Marla( 2,250 Feet ) :"<<endl;out<<size;
	if(size==5)
		{mughees=5*np;
			cout<<" \n\t\t ******************************************************** ";
			cout<<" \n\t\t #'Price of 5 Marlr Plot Near Park Area Is = Rs:"<<mughees;
			cout<<" \n\t\t ******************************************************** ";

			out<<"  ******************************************************** "<<endl;
			out<<"  #'Price of 5 Marlr Plot Near Park Area Is = Rs:"<<endl<<out<<mughees<<endl;
			out<<"  ******************************************************** "<<endl;

			break;}
	else if(size==10)
		{mughees=10*np;
	cout<<" \n\t\t ********************************************************* ";
	cout<<" \n\t\t #'Price of 10 Marla Plot Near Park Area Is = Rs:"<<mughees;
	cout<<" \n\t\t ********************************************************* ";
	
	out<<"  ********************************************************* "<<endl;
	out<<"  #'Price of 10 Marla Plot Near Park Area Is = Rs:"<<endl<<out<<mughees<<endl;
	out<<"  ********************************************************* "<<endl;

	}
	break;}
																												//THRE
	case 3:
	{cout<<" \n Enter Price For Plot Normal Area Per Square Foot = Rs: ";cin>>na;
	out<<"  Enter Price For Plot Normal Area Per Square Foot = Rs: "<<endl;out<<na<<endl;

	cout<<" \n Select The Size of Your House: \n\n";cout<<" 5...  For 5 Marla( 24 x 45 = 1,125 Feet ) : "<< "\n" <<" 10... For 10 Marla( 2,250 Feet ) :\n ";cin>>size;
	out<<"  Select The Size of Your House: "<<endl;out<<" 5...  For 5 Marla( 24 x 45 = 1,125 Feet ) : "<<endl;  out<<" 10... For 10 Marla( 2,250 Feet ) : "<<endl;out>>size;

	if(size==5)
		{mughees=5*na;
			cout<<" \n\t\t **************************************************************** ";
			cout<<" \n\t\t #'Price of 5 Marla Plot Near Normal Area Is = Rs:"<<mughees;break;
			cout<<" \n\t\t **************************************************************** ";
	
			out<<"  **************************************************************** "<<endl;
			out<<"  #'Price of 5 Marla Plot Near Normal Area Is = Rs:"<<endl<<out<<mughees<<endl;break;
			out<<"  **************************************************************** "<<endl;

	}
	else if(size==10)
		{mughees=10*na;
			cout<<" \n\t\t ****************************************************************** ";
			cout<<" \n\t\t #'Price of 10 Marla Plot Near Normal Area Is = Rs:"<<mughees;
	
			out<<"  ****************************************************************** "<<endl;
			out<<"  #'Price of 10 Marla Plot Near Normal Area Is = Rs:"<<endl<<out<<mughees<<endl;
	}break;
			cout<<" \n\t\t ****************************************************************** ";
			out<<" \n\t\t ****************************************************************** "<<endl;
	}
	default:
		exit(0);	
	}}
out.close();}
																												//Story Prize
void construction::story(void)
{
	fstream out;
		out.open("construction.doc", ios::out |ios::app |ios::in |ios::binary);
	
		int story;
	cout<<"\n\n\t\t #-----! \"STORY SELECTION AREA -----!# "" ";
	out<<" #-----! \"STORY SELECTION AREA -----!# "" "<<endl;

cout<<" \n\n Single or Double Story House \n";cout<<" 1... For Single " << "\n"<< " 2... For Double "<<endl;cin>>story;
out<<"  Single or Double Story House "<<endl;out<<" 1... For Single " <<endl; out<< " 2... For Double "<<endl;out<<story<<endl;

if(story==1)
{
cout<<" \t\t #-----\" Single Story "" -----# \n";
cout<<" \n\t\t::: Cost Details ::: \n"<<endl;

out<<"  #-----\" Single Story "" -----# "<<endl;
out<<" ::: Cost Details ::: "<<endl;

b=3000;
out<<b<<endl;
cout<<" \n Bricks Required For Single Story Are "<<b<< " Trucks";
out<<"  Bricks Required For Single Story Are "<<endl<<out<<b<< " Trucks"<<endl;
bricks=b*bricks;
out<<bricks;																										// Bricks Singal Story
cout<<" \n Bricks Cost For Single Story = Rs:: "<<bricks<<endl;
out<<"  Bricks Cost For Single Story = Rs:: "<<endl<<out<<bricks<<endl;

ce=250;
out<<ce<<endl;
cout<<" \n Cement Required For Single Story Is "<<ce<< " Bags";
out<<"  Cement Required For Single Story Is "<<endl<<out<<ce<< " Bags"<<endl;
cement=ce*cement;out<<cement<<endl;																					// Cement Singal Story
cout<<" \n Cement Cost For Single Story = Rs:: "<<cement<<endl;					
out<<"  Cement Cost For Single Story = Rs:: "<<endl<<out<<cement<<endl;

if(month<8)
{
	l=6;
	l=l*(8-month);out<<l<<endl;
cout<<" \n Labor Required For Single Story To Complete House In "<<month<<" Months Are " <<l<< " Labors";
out<<"  Labor Required For Single Story To Complete House In "<<endl<<out<<month<<" Months Are " <<endl<<out<<l<< " Labors"<<endl;
labor=l*(month*labor);out<<labor<<endl;

cout<<" \n Labor Cost = Rs:: "<<labor;
out<<"  Labor Cost = Rs:: "<<endl<<out<<labor<<endl;
}																													// Labor Single Story
else
{
cout<<" \n Labor Required For Singal Story To Complete House In "<<month<<" Months Are " <<l<< " Labors";
out<<"  Labor Required For Singal Story To Complete House In "<<endl<<out<<month<<" Months Are " <<endl<<out<<l<< " Labors"<<endl;
labor=l*(month*labor);out<<labor<<endl;
cout<<" \n Labor Cost = Rs:: "<<labor;
out<<" \n Labor Cost = Rs:: "<<endl<<out<<labor<<endl;
}

sa=2000;out<<sa<<endl;																								// Sand Single Story
cout<<" \n\n Sand Required For Single Story Is "<<sa<< " Trucks";
out<<"  Sand Required For Single Story Is "<<endl<<out<<sa<< " Trucks"<<endl;
sand=sa*sand;out<<sand<<endl;
cout<<" \n Sand Cost For Single Story = Rs:: "<<sand<<endl;
out<<" \n Sand Cost For Single Story = Rs:: "<<endl<<out<<sand<<endl;

s=1000;out<<s<<endl;																								// Stone Singal Story
cout<<" \n\n Stone Required For Single Story Are "<<s<< " Trucks";
out<<"  Stone Required For Single Story Are "<<endl<<out<<s<< " Trucks"<<endl;
stone=s*stone;out<<stone<<endl;
cout<<" \n Stone Cost For Single Story = Rs:: "<<stone<<endl;
out<<"  Stone Cost For Single Story = Rs:: "<<endl<<out<<stone<<endl;

cout<<" \n Contracter Cost = Rs:: "<<contracter<<endl;
out<<" Contracter Cost = Rs:: "<<endl<<out<<contracter<<endl;
cout<<" \n Biryani Cost = Rs:: "<<biryanicost;
out<<"  Biryani Cost = Rs:: "<<endl<<out<<biryanicost<<endl;
cout<<" \n\n Do You Wanna Give Dage of Biryani To Labors For Roof Building ...\n";cout<<" 1. For Yes"<<endl;cout<<" 2. For No"<<endl;cin>>biryani;
out<<"  Do You Wanna Give Dage of Biryani To Labors For Roof Building ..."<<endl;out<<" 1. For Yes"<<endl;out<<" 2. For No"<<endl;out<<biryani<<endl;
if(biryani==1)
{tcwb=biryanicost+bricks+cement+stone+labor+contracter+mughees;
out<<tcwb<<endl;
cout<<" \n\t\t ************************************ ";	
cout<<" \n\t\t'Your Total Cost' = Rs::: "<<tcwb<<endl;cout<<" \n\t\t\t\t\ And You made The Labors Happy \n\t\t\t\t\ # Happy To Serve You! # \n\t\t\t\t\ $ Hope We Helped You! $ \n\t\t\t\t\ Contact Us # 03016466544 ";
cout<<" \n\t\t ************************************ ";

out<<"  ************************************ "<<endl;	
out<<" 'Your Total Cost' = Rs::: "<<endl<<out<<tcwb<<endl;out<<"  And You made The Labors Happy \n\t\t\t\t\ # Happy To Serve You! # \n\t\t\t\t\ $ Hope We Helped You! $ \n\t\t\t\t\ Contact Us # 03016466544 ";
out<<" \n\t\t ************************************ "<<endl;

}
else if (biryani==2)
{tcwob=bricks+cement+stone+labor+contracter+mughees;
out<<tcwob<<endl;
cout<<" \n\t\t ************************************* ";	
cout<<" \n\t\t'Your Total Cost' = Rs::: "<<tcwob<<endl;cout<<" \n\t\t\t\t\ But You made The Labors Unhappy \n\t\t\t\t\ # Happy To Serve You! # \n\t\t\t\t\ $ Hope We Helped You! $ \n\t\t\t\t\ Contact Us # 03016466544 ";

out<<"  ************************************* "<<endl;	
out<<" 'Your Total Cost' = Rs::: "<<endl<<out<<tcwob<<endl;out<<"  But You made The Labors Unhappy \n\t\t\t\t\ # Happy To Serve You! # \n\t\t\t\t\ $ Hope We Helped You! $ \n\t\t\t\t\ Contact Us # 03016466544 "<<endl;
}

cout<<" \n\t\t ************************************* ";
out<<"  ************************************* "<<endl;

}
if(story==2)
{
cout<<" \t #-----\" Double Story "" -----# \n";
cout<<" \n\t\t::: Cost Details ::: \n"<<endl;
out<<"  #-----\" Double Story "" -----# "<<endl;
out<<" ::: Cost Details ::: "<<endl;
b=3000;
b=2*b;out<<b<<endl;
cout<<" \n Bricks Required For Double Story Are " <<b<< " Trucks";
out<<"  Bricks Required For Double Story Are " <<endl<<out<<b<< " Trucks"<<endl;
bricks=b*bricks;out<<bricks<<endl;																	// Bricks Double Story
cout<<" \n Bricks Cost For Double Story = Rs:: "<<bricks<<endl;
out<<"  Bricks Cost For Double Story = Rs:: "<<endl<<out<<bricks<<endl;

ce=250;
ce=2*ce;out<<ce<<endl;
cout<<" \n Cement Required For Double Story Are " <<ce<< " Bags";
out<<"  Cement Required For Double Story Are " <<endl<<out<<ce<< " Bags"<<endl;
cement=ce*cement;out<<cement<<endl;																	// Cement Double Story
cout<<" \n Cement Cost For Double Story = Rs:: "<<cement<<endl;
out<<"  Cement Cost For Double Story = Rs:: "<<endl<<out<<cement<<endl;

if(month<8)
{
	l=6;
	l=l*(8-month);out<<l<<endl;
cout<<" \n Labor Required For Double Story To Complete House In "<<month<<" Months Are " <<l<< " Labors";
out<<"  Labor Required For Double Story To Complete House In "<<endl<<out<<month<<" Months Are " <<endl<<out<<l<< " Labors"<<endl;
labor=2*(l*((month)*labor));out<<labor<<endl;

cout<<" \n Labor Cost = Rs:: "<<labor;
out<<" \n Labor Cost = Rs:: "<<endl<<out<<labor<<endl;												// Labor Double Story
}
else
{

cout<<" \n Labor Required For Double Story To Complete House In "<<month<<" Months Are " <<l<< " Labors";
out<<"  Labor Required For Double Story To Complete House In "<<endl<<out<<month<<" Months Are " <<endl<<out<<l<< " Labors"<<endl;
labor=2*(l*(month*labor));out<<labor<<endl;
cout<<" \n Labor Cost = Rs:: "<<labor;
out<<"  Labor Cost = Rs:: "<<labor<<endl;
}

sa=2000;
sa=2*sa;out<<sa<<endl;
cout<<" \n\n Sand Required For Double Story Is " <<sa<< " Trucks";
out<<"  Sand Required For Double Story Is " <<endl<<out<<sa<< " Trucks"<<endl;
sand=sa*sand;out<<sand<<endl;																		// Sand Double Story
cout<<" \n Sand Cost For Double Story = Rs:: "<<sand<<endl;
out<<"  Sand Cost For Double Story = Rs:: "<<endl<<out<<sand<<endl;

s=1000;
s=2*s;out<<s<<endl;
cout<<" \n\n Stone Required For Double Story Are " <<s<< " Trucks";
out<<"  Stone Required For Double Story Are " <<endl<<out<<s<< " Trucks"<<endl;						// Stone Double Story
stone=s*stone;out<<stone<<endl;
cout<<" \n Stone Cost For Double Story = Rs:: "<<stone<<endl;
out<<"  Stone Cost For Double Story = Rs:: "<<endl<<out<<stone<<endl;

contracter=2*contracter;out<<contracter<<endl;
cout<<" \n Contracter Cost = Rs:: "<<contracter<<endl;												// Contractor Double Story
out<<"  Contracter Cost = Rs:: "<<endl<<out<<contracter<<endl;
biryanicost=2*biryanicost;out<<biryanicost<<endl;
cout<<" \n Biryani Cost = Rs:: "<<biryanicost;
out<<"  Biryani Cost = Rs:: "<<endl<<out<<biryanicost<<endl;
cout<<" \n\n Do You Wanna Give Dage of Biryani To Labors For Roof Building ...\n";cout<<" 1. For Yes"<<endl;cout<<" 2. For No"<<endl;cin>>biryani;
out<<"  Do You Wanna Give Dage of Biryani To Labors For Roof Building ..."<<endl;out<<" 1. For Yes"<<endl;out<<" 2. For No"<<endl;out<<biryani<<endl;
if(biryani==1)
{tcwb=(biryanicost+bricks+cement+stone+sand+labor+contracter+mughees);
cout<<" \n\t\t ******************************* ";	
cout<<" \n\t\t 'Your Total Cost' = Rs::: "<<tcwb;
cout<<" \n\t\t ******************************* ";
cout<<" \n\t\t And You made The Labors Happy \n\t\t\ # Happy To Serve You! # \n\t\t $ Hope We Helped You! $ \n\t\t Contact Us # 03016466544 ";

out<<"  ******************************* "<<endl;	
out<<"  'Your Total Cost' = Rs::: "<<endl<<out<<tcwb;
out<<"  ******************************* "<<endl;
out<<"  And You made The Labors Happy \n\t\t\ # Happy To Serve You! # \n\t\t $ Hope We Helped You! $ \n\t\t Contact Us # 03016466544 "<<endl;

}
else if (biryani==2)
{tcwob=(bricks+cement+stone+labor+sand+contracter+mughees);
out<<tcwob<<endl;
cout<<" \n\t\t ******************************** ";
cout<<" \n\t\t 'Your Total Cost' = Rs::: "<<tcwob;
cout<<" \n\t\t ******************************** ";
cout<<" \n\t\t But You made The Labors Unhappy \n\t\t # Happy To Serve You! # \n\t\t $ Hope We Helped You! $ \n\t\t Contact Us # 03016466544 ";

out<<"  ******************************** "<<endl;
out<<"  'Your Total Cost' = Rs::: "<<endl<<out<<tcwob<<endl;
out<<"  ******************************** "<<endl;
out<<"  But You made The Labors Unhappy \n\t\t # Happy To Serve You! # \n\t\t $ Hope We Helped You! $ \n\t\t Contact Us # 03016466544 "<<endl;

}
}
out.close();
}
