#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

class construction
{
private:

	//Constant Price Variables
	int b,ce,s,l,sa;
	
	// Data Variables
	int mt,tcwb,tcwob,month;
	int bricks;int cement;int stone;int labor;int contracter,sand;
	
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

void construction::menu(void)
{
	cout<<"\n\n Press D.For Data Entry \n Press P.For Plot Prize \n Press S.For Story \n Press E.To Stop \n\n\t\t\t Enter Your Choice::: \n";
	cin>>ch;
	if(ch=='D')
	{data();}
	else if(ch=='P')
	{marla();}
	else if(ch=='S')
	{story();}
	else if(ch=='E')
	{exit(0);}
	else
	{cout<<" \n\t\t Error!!! \n\t\t Run The Program Again";}
	//exit(0)}
}

void construction::data(void)
{
cout<<"\n\t\t #----- \" MATERIAL REQUIRED PRIZE ENTERY SECTION " " -----# \n";
cout<<" \n Enter Now-a-Days Price of Bricks Per Brick = Rs: ";cin>>bricks;													// Rs 8
cout<<" Enter Now-a-Days Price of Cement Per Bag = Rs: ";cin>>cement;												// Rs 550			
cout<<" Enter Now-a-Days Price of Stone Per Foot = Rs: ";cin>>stone;												// Rs 65
cout<<" Enter Now-a-Days Price of Sand Per Foot = Rs: ";cin>>sand;													// Rs 24
cout<<" \n Enter Now-a-Days Labor Cost Per Labor Per Month = Rs: ";cin>>labor;											// Rs 1,200
cout<<" Enter Now-a-Days Contracter Cost = Rs: ";cin>>contracter;													// Rs 100,000
cout<<" Enter Biryani Cost Per Dage = Rs: ";cin>>biryanicost;														// Rs 5,000


cout<<" \n Enter Time In Which You Want Your House To Be Completed(In Months): ";cin>>month;

mt=bricks+cement+stone+sand;
cout<<" \n\t\t ******************************** ";
cout<<" \n\t\t Total Material Cost = Rs: "<<mt;
cout<<" \n\t\t ******************************** ";
}
																													//Plot Prize
void construction::marla(void)
	{
		cout<<"\n\t\t #----- \" PLOT PRIZE SECTION " " -----# \n";
	
	cout<<" \n Select Your Plot Location:: \n";cout<<" \n 1. For Plot Near Market Area ... \n";cout<<" 2. For Plot Near Park .... \n";cout<<" 3. For Plot At Normal Location ... \n";cin>>location;
	switch(location)
	{
																													//FIRST
	case 1:	
	{cout<<" \n Enter Price For Plot Near Market Area Per Square Feet = Rs: ";cin>>nma;
	cout<<" \n\n Select The Size of Your House:"<<endl;cout<<" 5...  For 5 Marla( 24 x 45 = 1,125 Feet ) : "<< "\n" <<" 10... For 10 Marla( 2,250 Feet ) :\n ";cin>>size;
	if(size==5)
	{mughees=5*nma;
		cout<<" \n\t\t ************************************************************ ";
		cout<<" \n\t\t #'Price of 5 Marla Plot Near Market Area Is = Rs: "<<mughees;
		cout<<" \n\t\t *********************************************************** ";
		break;}
	else if(size==10)
	{mughees=10*nma;
		cout<<" \n\t\t ************************************************************* ";
		cout<<" \n\t\t #'Price of 10 Marla Plot Near Market Area Is = Rs: "<<mughees;
		cout<<" \n\t\t ************************************************************ ";
		break;}
																												//TWO
	case 2:	
	{cout<<" \n Enter Price For Plot Near Park Area Per Square Feet = Rs: ";cin>>np;
	cout<<" \n Select The Size of Your House: \n\n";cout<<" 5...  For 5 Marla( 24 x 45 = 1,125 Feet ) : "<< "\n" <<" 10... For 10 Marla( 2,250 Feet ) :\n ";cin>>size;
	if(size==5)
		{mughees=5*np;
			cout<<" \n\t\t ******************************************************** ";
			cout<<" \n\t\t #'Price of 5 Marlr Plot Near Park Area Is = Rs:"<<mughees;
			cout<<" \n\t\t ******************************************************** ";
			break;}
	else if(size==10)
		{mughees=10*np;
	cout<<" \n\t\t ********************************************************* ";
	cout<<" \n\t\t #'Price of 10 Marla Plot Near Park Area Is = Rs:"<<mughees;
	cout<<" \n\t\t ********************************************************* ";}break;}
																												//THREE
	case 3:
	{cout<<" \n Enter Price For Plot Normal Area Per Square Foot = Rs: ";cin>>na;
	cout<<" \n Select The Size of Your House: \n\n";cout<<" 5...  For 5 Marla( 24 x 45 = 1,125 Feet ) : "<< "\n" <<" 10... For 10 Marla( 2,250 Feet ) :\n ";cin>>size;
	if(size==5)
		{mughees=5*na;
			cout<<" \n\t\t **************************************************************** ";
			cout<<" \n\t\t #'Price of 5 Marla Plot Near Normal Area Is = Rs:"<<mughees;break;
			cout<<" \n\t\t **************************************************************** ";}
	else if(size==10)
		{mughees=10*na;
			cout<<" \n\t\t ****************************************************************** ";
			cout<<" \n\t\t #'Price of 10 Marla Plot Near Normal Area Is = Rs:"<<mughees;}break;
			cout<<" \n\t\t ****************************************************************** ";
	}
	default:
		exit(0);	
	}}}
																											//Story Prize
void construction::story(void)
{
	int story;
	cout<<"\n\n\t\t #-----! \"STORY SELECTION AREA -----!# "" ";
cout<<" \n\n Single or Double Story House \n";cout<<" 1... For Single " << "\n"<< " 2... For Double "<<endl;cin>>story;
if(story==1)
{
cout<<" \t\t #-----\" Single Story "" -----# \n";
cout<<" \n\t\t::: Cost Details ::: \n"<<endl;

b=3000;
cout<<" \n Bricks Required For Single Story Are "<<b<< " Bricks";
bricks=b*bricks;																							// Bricks Singal Story
cout<<" \n Bricks Cost For Single Story = Rs:: "<<bricks<<endl;

ce=250;
cout<<" \n Cement Required For Single Story Is "<<ce<< " Bags";
cement=ce*cement;																							// Cement Singal Story
cout<<" \n Cement Cost For Single Story = Rs:: "<<cement<<endl;					

if(month<8)
{
	l=6;
	l=l*(8-month);
cout<<" \n Labor Required For Single Story To Complete House In "<<month<<" Months Are " <<l<< " Labors";
labor=l*(month*labor);

cout<<" \n Labor Cost = Rs:: "<<labor;
}																											// Labor Single Story
else
{
cout<<" \n Labor Required For Singal Story To Complete House In "<<month<<" Months Are " <<l<< " Labors";
labor=l*(month*labor);
cout<<" \n Labor Cost = Rs:: "<<labor;
}

sa=2000;																									// Sand Single Story
cout<<" \n\n Sand Required For Single Story Is "<<sa<< " Feets";
sand=sa*sand;
cout<<" \n Sand Cost For Single Story = Rs:: "<<sand<<endl;

s=1000;																										// Stone Singal Story
cout<<" \n\n Stone Required For Single Story Are "<<s<< " Feets";
stone=s*stone;
cout<<" \n Stone Cost For Single Story = Rs:: "<<stone<<endl;

cout<<" \n Contracter Cost = Rs:: "<<contracter<<endl;
cout<<" \n Biryani Cost = Rs:: "<<biryanicost;
cout<<" \n\n Do You Wanna Give Dage of Biryani To Labors For Roof Building ...\n";cout<<" 1. For Yes"<<endl;cout<<" 2. For No"<<endl;cin>>biryani;
if(biryani==1)
{tcwb=biryanicost+bricks+cement+stone+labor+contracter+mughees;
cout<<" \n\t\t ************************************ ";	
cout<<" \n\t\t'Your Total Cost' = Rs::: "<<tcwb<<endl;cout<<" \n\t\t\t\t\ And You made The Labors Happy \n\t\t\t\t\ # Happy To Serve You! # \n\t\t\t\t\ $ Hope We Helped You! $ \n\t\t\t\t\ Contact Us # 03016466544 ";
cout<<" \n\t\t ************************************ ";}
else if (biryani==2)
{tcwob=bricks+cement+stone+labor+contracter+mughees;
cout<<" \n\t\t ************************************* ";	
cout<<" \n\t\t'Your Total Cost' = Rs::: "<<tcwob<<endl;cout<<" \n\t\t\t\t\ But You made The Labors Unhappy \n\t\t\t\t\ # Happy To Serve You! # \n\t\t\t\t\ $ Hope We Helped You! $ \n\t\t\t\t\ Contact Us # 03016466544 ";}
cout<<" \n\t\t ************************************* ";
}
if(story==2)
{
cout<<" \t #-----\" Double Story "" -----# \n";
cout<<" \n\t\t::: Cost Details ::: \n"<<endl;
b=3000;				// Bricks
b=2*b;
cout<<" \n Bricks Required For Double Story Are " <<b<< " Bricks";
bricks=b*bricks;																	// Bricks Double Story
cout<<" \n Bricks Cost For Double Story = Rs:: "<<bricks<<endl;

ce=250;				// Bags
ce=2*ce;
cout<<" \n Cement Required For Double Story Are " <<ce<< " Bags";
cement=ce*cement;																	// Cement Double Story
cout<<" \n Cement Cost For Double Story = Rs:: "<<cement<<endl;

if(month<8)
{l=6;
	l=l*(8-month);
cout<<" \n Labor Required For Double Story To Complete House In "<<month<<" Months Are " <<l<< " Labors";
labor=2*(l*((month)*labor));
cout<<" \n Labor Cost = Rs:: "<<labor;												// Labor Double Story
}
else
{
cout<<" \n Labor Required For Double Story To Complete House In "<<month<<" Months Are " <<l<< " Labors";
labor=2*(l*(month*labor));
cout<<" \n Labor Cost = Rs:: "<<labor;
}

sa=2000;			// Feet
sa=2*sa;
cout<<" \n\n Sand Required For Double Story Is " <<sa<< " Feets";
sand=sa*sand;																		// Sand Double Story
cout<<" \n Sand Cost For Double Story = Rs:: "<<sand<<endl;

s=1000;				// Feet
s=2*s;
cout<<" \n\n Stone Required For Double Story Are " <<s<< " Feets";					// Stone Double Story
stone=s*stone;
cout<<" \n Stone Cost For Double Story = Rs:: "<<stone<<endl;

contracter=2*contracter;
cout<<" \n Contracter Cost = Rs:: "<<contracter<<endl;								// Contractor Double Story

biryanicost=2*biryanicost;
cout<<" \n Biryani Cost = Rs:: "<<biryanicost;
cout<<" \n\n Do You Wanna Give Dage of Biryani To Labors For Roof Building ...\n";cout<<" 1. For Yes"<<endl;cout<<" 2. For No"<<endl;cin>>biryani;
if(biryani==1)
{tcwb=(biryanicost+bricks+cement+stone+sand+labor+contracter+mughees);
cout<<" \n\t\t ******************************* ";	
cout<<" \n\t\t 'Your Total Cost' = Rs::: "<<tcwb;
cout<<" \n\t\t ******************************* ";
cout<<" \n\t\t And You made The Labors Happy \n\t\t\ # Happy To Serve You! # \n\t\t $ Hope We Helped You! $ \n\t\t Contact Us # 03016466544 ";}
else if (biryani==2)
{tcwob=(bricks+cement+stone+labor+sand+contracter+mughees);
cout<<" \n\t\t ******************************** ";
cout<<" \n\t\t 'Your Total Cost' = Rs::: "<<tcwob;
cout<<" \n\t\t ******************************** ";
cout<<" \n\t\t But You made The Labors Unhappy \n\t\t # Happy To Serve You! # \n\t\t $ Hope We Helped You! $ \n\t\t Contact Us # 03016466544 ";}
}}
int main()
{
	construction obj;
	ofstream out;
	 if (out.is_open())
	 {
	out.open ("project34.txt", ios::in|ios::out|ios::binary);
	out<<"cheema";}
	 else{}
	cout<<"\n\n\t\t\t !*************************************************!";
	cout<<"\n\t\t\t   ***# WELCOME TO THE SERVER CONSTRUCTIONS #***";
	cout<<"\n\t\t\t !*************************************************!";
	cout<<"\n\n\t\t\t\t #!!!$ THE MAIN MENU #!!!$ ";
	 
while(1)
	{
	obj.menu();
	}
out.close();
getch();														
}