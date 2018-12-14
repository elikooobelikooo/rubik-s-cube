#include <stdio.h>
//#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
unsigned int kvadratlar4x4[256];
unsigned long long allTrueAnswers[524289]={0};
unsigned long long counter=0, max;

int main(int argc, char *argv[]) {
freopen("8x8.txt", "wb+", stdout);
kvadratlar4x4[0]=1379;
kvadratlar4x4[1]=1388;
kvadratlar4x4[2]=1427;
kvadratlar4x4[3]=1436;
kvadratlar4x4[4]=1589;
kvadratlar4x4[5]=1594;
kvadratlar4x4[6]=1733;
kvadratlar4x4[7]=1738;
kvadratlar4x4[8]=2357;
kvadratlar4x4[9]=2362;
kvadratlar4x4[10]=2501;
kvadratlar4x4[11]=2506;
kvadratlar4x4[12]=2659;
kvadratlar4x4[13]=2668;
kvadratlar4x4[14]=2707;
kvadratlar4x4[15]=2716;
kvadratlar4x4[16]=5234;
kvadratlar4x4[17]=5245;
kvadratlar4x4[18]=5250;
kvadratlar4x4[19]=5261;
kvadratlar4x4[20]=5924;
kvadratlar4x4[21]=5931;
kvadratlar4x4[22]=6100;
kvadratlar4x4[23]=6107;
kvadratlar4x4[24]=6180;
kvadratlar4x4[25]=6187;
kvadratlar4x4[26]=6356;
kvadratlar4x4[27]=6363;
kvadratlar4x4[28]=7026;
kvadratlar4x4[29]=7037;
kvadratlar4x4[30]=7042;
kvadratlar4x4[31]=7053;
kvadratlar4x4[32]=9239;
kvadratlar4x4[33]=9240;
kvadratlar4x4[34]=9447;
kvadratlar4x4[35]=9448;
kvadratlar4x4[36]=10049;
kvadratlar4x4[37]=10062;
kvadratlar4x4[38]=10161;
kvadratlar4x4[39]=10174;
kvadratlar4x4[40]=10305;
kvadratlar4x4[41]=10318;
kvadratlar4x4[42]=10417;
kvadratlar4x4[43]=10430;
kvadratlar4x4[44]=11031;
kvadratlar4x4[45]=11032;
kvadratlar4x4[46]=11239;
kvadratlar4x4[47]=11240;
kvadratlar4x4[48]=13574;
kvadratlar4x4[49]=13577;
kvadratlar4x4[50]=13814;
kvadratlar4x4[51]=13817;
kvadratlar4x4[52]=13904;
kvadratlar4x4[53]=13919;
kvadratlar4x4[54]=13984;
kvadratlar4x4[55]=13999;
kvadratlar4x4[56]=14672;
kvadratlar4x4[57]=14687;
kvadratlar4x4[58]=14752;
kvadratlar4x4[59]=14767;
kvadratlar4x4[60]=14854;
kvadratlar4x4[61]=14857;
kvadratlar4x4[62]=15094;
kvadratlar4x4[63]=15097;
kvadratlar4x4[64]=16679;
kvadratlar4x4[65]=16680;
kvadratlar4x4[66]=16855;
kvadratlar4x4[67]=16856;
kvadratlar4x4[68]=17009;
kvadratlar4x4[69]=17022;
kvadratlar4x4[70]=17025;
kvadratlar4x4[71]=17038;
kvadratlar4x4[72]=19825;
kvadratlar4x4[73]=19838;
kvadratlar4x4[74]=19841;
kvadratlar4x4[75]=19854;
kvadratlar4x4[76]=20007;
kvadratlar4x4[77]=20008;
kvadratlar4x4[78]=20183;
kvadratlar4x4[79]=20184;
kvadratlar4x4[80]=20534;
kvadratlar4x4[81]=20537;
kvadratlar4x4[82]=20678;
kvadratlar4x4[83]=20681;
kvadratlar4x4[84]=21344;
kvadratlar4x4[85]=21359;
kvadratlar4x4[86]=21392;
kvadratlar4x4[87]=21407;
kvadratlar4x4[88]=23648;
kvadratlar4x4[89]=23663;
kvadratlar4x4[90]=23696;
kvadratlar4x4[91]=23711;
kvadratlar4x4[92]=24374;
kvadratlar4x4[93]=24377;
kvadratlar4x4[94]=24518;
kvadratlar4x4[95]=24521;
kvadratlar4x4[96]=24659;
kvadratlar4x4[97]=24668;
kvadratlar4x4[98]=24739;
kvadratlar4x4[99]=24748;
kvadratlar4x4[100]=25349;
kvadratlar4x4[101]=25354;
kvadratlar4x4[102]=25589;
kvadratlar4x4[103]=25594;
kvadratlar4x4[104]=27653;
kvadratlar4x4[105]=27658;
kvadratlar4x4[106]=27893;
kvadratlar4x4[107]=27898;
kvadratlar4x4[108]=28499;
kvadratlar4x4[109]=28508;
kvadratlar4x4[110]=28579;
kvadratlar4x4[111]=28588;
kvadratlar4x4[112]=28994;
kvadratlar4x4[113]=29005;
kvadratlar4x4[114]=29106;
kvadratlar4x4[115]=29117;
kvadratlar4x4[116]=29204;
kvadratlar4x4[117]=29211;
kvadratlar4x4[118]=29412;
kvadratlar4x4[119]=29419;
kvadratlar4x4[120]=32020;
kvadratlar4x4[121]=32027;
kvadratlar4x4[122]=32228;
kvadratlar4x4[123]=32235;
kvadratlar4x4[124]=32322;
kvadratlar4x4[125]=32333;
kvadratlar4x4[126]=32434;
kvadratlar4x4[127]=32445;
kvadratlar4x4[128]=33090;
kvadratlar4x4[129]=33101;
kvadratlar4x4[130]=33202;
kvadratlar4x4[131]=33213;
kvadratlar4x4[132]=33300;
kvadratlar4x4[133]=33307;
kvadratlar4x4[134]=33508;
kvadratlar4x4[135]=33515;
kvadratlar4x4[136]=36116;
kvadratlar4x4[137]=36123;
kvadratlar4x4[138]=36324;
kvadratlar4x4[139]=36331;
kvadratlar4x4[140]=36418;
kvadratlar4x4[141]=36429;
kvadratlar4x4[142]=36530;
kvadratlar4x4[143]=36541;
kvadratlar4x4[144]=36947;
kvadratlar4x4[145]=36956;
kvadratlar4x4[146]=37027;
kvadratlar4x4[147]=37036;
kvadratlar4x4[148]=37637;
kvadratlar4x4[149]=37642;
kvadratlar4x4[150]=37877;
kvadratlar4x4[151]=37882;
kvadratlar4x4[152]=39941;
kvadratlar4x4[153]=39946;
kvadratlar4x4[154]=40181;
kvadratlar4x4[155]=40186;
kvadratlar4x4[156]=40787;
kvadratlar4x4[157]=40796;
kvadratlar4x4[158]=40867;
kvadratlar4x4[159]=40876;
kvadratlar4x4[160]=41014;
kvadratlar4x4[161]=41017;
kvadratlar4x4[162]=41158;
kvadratlar4x4[163]=41161;
kvadratlar4x4[164]=41824;
kvadratlar4x4[165]=41839;
kvadratlar4x4[166]=41872;
kvadratlar4x4[167]=41887;
kvadratlar4x4[168]=44128;
kvadratlar4x4[169]=44143;
kvadratlar4x4[170]=44176;
kvadratlar4x4[171]=44191;
kvadratlar4x4[172]=44854;
kvadratlar4x4[173]=44857;
kvadratlar4x4[174]=44998;
kvadratlar4x4[175]=45001;
kvadratlar4x4[176]=45351;
kvadratlar4x4[177]=45352;
kvadratlar4x4[178]=45527;
kvadratlar4x4[179]=45528;
kvadratlar4x4[180]=45681;
kvadratlar4x4[181]=45694;
kvadratlar4x4[182]=45697;
kvadratlar4x4[183]=45710;
kvadratlar4x4[184]=48497;
kvadratlar4x4[185]=48510;
kvadratlar4x4[186]=48513;
kvadratlar4x4[187]=48526;
kvadratlar4x4[188]=48679;
kvadratlar4x4[189]=48680;
kvadratlar4x4[190]=48855;
kvadratlar4x4[191]=48856;
kvadratlar4x4[192]=50438;
kvadratlar4x4[193]=50441;
kvadratlar4x4[194]=50678;
kvadratlar4x4[195]=50681;
kvadratlar4x4[196]=50768;
kvadratlar4x4[197]=50783;
kvadratlar4x4[198]=50848;
kvadratlar4x4[199]=50863;
kvadratlar4x4[200]=51536;
kvadratlar4x4[201]=51551;
kvadratlar4x4[202]=51616;
kvadratlar4x4[203]=51631;
kvadratlar4x4[204]=51718;
kvadratlar4x4[205]=51721;
kvadratlar4x4[206]=51958;
kvadratlar4x4[207]=51961;
kvadratlar4x4[208]=54295;
kvadratlar4x4[209]=54296;
kvadratlar4x4[210]=54503;
kvadratlar4x4[211]=54504;
kvadratlar4x4[212]=55105;
kvadratlar4x4[213]=55118;
kvadratlar4x4[214]=55217;
kvadratlar4x4[215]=55230;
kvadratlar4x4[216]=55361;
kvadratlar4x4[217]=55374;
kvadratlar4x4[218]=55473;
kvadratlar4x4[219]=55486;
kvadratlar4x4[220]=56087;
kvadratlar4x4[221]=56088;
kvadratlar4x4[222]=56295;
kvadratlar4x4[223]=56296;
kvadratlar4x4[224]=58482;
kvadratlar4x4[225]=58493;
kvadratlar4x4[226]=58498;
kvadratlar4x4[227]=58509;
kvadratlar4x4[228]=59172;
kvadratlar4x4[229]=59179;
kvadratlar4x4[230]=59348;
kvadratlar4x4[231]=59355;
kvadratlar4x4[232]=59428;
kvadratlar4x4[233]=59435;
kvadratlar4x4[234]=59604;
kvadratlar4x4[235]=59611;
kvadratlar4x4[236]=60274;
kvadratlar4x4[237]=60285;
kvadratlar4x4[238]=60290;
kvadratlar4x4[239]=60301;
kvadratlar4x4[240]=62819;
kvadratlar4x4[241]=62828;
kvadratlar4x4[242]=62867;
kvadratlar4x4[243]=62876;
kvadratlar4x4[244]=63029;
kvadratlar4x4[245]=63034;
kvadratlar4x4[246]=63173;
kvadratlar4x4[247]=63178;
kvadratlar4x4[248]=63797;
kvadratlar4x4[249]=63802;
kvadratlar4x4[250]=63941;
kvadratlar4x4[251]=63946;
kvadratlar4x4[252]=64099;
kvadratlar4x4[253]=64108;
kvadratlar4x4[254]=64147;
kvadratlar4x4[255]=64156;
				
	     
		 unsigned int boyukKvadratForDovr;
		 unsigned long long new8x8;
		 unsigned char SUITABLE, WHILE_TEST;
	 		for (boyukKvadratForDovr = 0; boyukKvadratForDovr < 4294967295; boyukKvadratForDovr++)
                {
                 //   a1 = boyukKvadratForDovr % 256;
                 //   a2 = (boyukKvadratForDovr / 256) % 256;
                  //  a3 = ((boyukKvadratForDovr / 256) / 256) % 256;
                  //  a4 = (((boyukKvadratForDovr / 256) / 256) / 256) % 256;
                   //if (((boyukKvadratForDovr / 256) / 256) % 256>=200) break;
                   
                    new8x8 =   kvadratlar4x4[boyukKvadratForDovr % 256] + 
                             (((unsigned long long)kvadratlar4x4[(boyukKvadratForDovr >>8 ) % 256])<<16) +
                             (((unsigned long long)kvadratlar4x4[(boyukKvadratForDovr >>16) % 256])<<32) +
                             (((unsigned long long)kvadratlar4x4[(boyukKvadratForDovr >>24) % 256])<<48);
                    //printf("%llu\n",boyukKvadratForDovr);
                    
                    //printf("%d\n", boyukKvadratForDovr); 
                    
                    //printf("%llu\n", new8x8); return 0;
                    SUITABLE = 0;
					WHILE_TEST = 1;
                    while (WHILE_TEST == 1)
                    {
if (((new8x8>>15)%2 + (new8x8>>31)%2 + (new8x8>>47)%2 + (new8x8>>63)%2) % 2 == 0) break;
if (((new8x8>>10)%2 + (new8x8>>26)%2 + (new8x8>>42)%2 + (new8x8>>58)%2) % 2 == 0) break;
if (((new8x8>>5)%2 + (new8x8>>21)%2 + (new8x8>>37)%2 + (new8x8>>53)%2) % 2 == 0) break;
if (((new8x8>>0)%2 + (new8x8>>16)%2 + (new8x8>>32)%2 + (new8x8>>48)%2) % 2 == 0) break;
if (((new8x8>>14)%2 + (new8x8>>31)%2 + (new8x8>>42)%2 + (new8x8>>59)%2) % 2 == 0) break;
if (((new8x8>>4)%2 + (new8x8>>21)%2 + (new8x8>>32)%2 + (new8x8>>49)%2) % 2 == 0) break;
if (((new8x8>>11)%2 + (new8x8>>26)%2 + (new8x8>>47)%2 + (new8x8>>62)%2) % 2 == 0) break;
if (((new8x8>>1)%2 + (new8x8>>16)%2 + (new8x8>>37)%2 + (new8x8>>52)%2) % 2 == 0) break;
if (((new8x8>>13)%2 + (new8x8>>31)%2 + (new8x8>>37)%2 + (new8x8>>55)%2) % 2 == 0) break;
if (((new8x8>>8)%2 + (new8x8>>26)%2 + (new8x8>>32)%2 + (new8x8>>50)%2) % 2 == 0) break;
if (((new8x8>>7)%2 + (new8x8>>21)%2 + (new8x8>>47)%2 + (new8x8>>61)%2) % 2 == 0) break;
if (((new8x8>>2)%2 + (new8x8>>16)%2 + (new8x8>>42)%2 + (new8x8>>56)%2) % 2 == 0) break;
if (((new8x8>>12)%2 + (new8x8>>31)%2 + (new8x8>>32)%2 + (new8x8>>51)%2) % 2 == 0) break;
if (((new8x8>>9)%2 + (new8x8>>26)%2 + (new8x8>>37)%2 + (new8x8>>54)%2) % 2 == 0) break;
if (((new8x8>>6)%2 + (new8x8>>21)%2 + (new8x8>>42)%2 + (new8x8>>57)%2) % 2 == 0) break;
if (((new8x8>>3)%2 + (new8x8>>16)%2 + (new8x8>>47)%2 + (new8x8>>60)%2) % 2 == 0) break;
if (((new8x8>>15)%2 + (new8x8>>30)%2 + (new8x8>>43)%2 + (new8x8>>58)%2) % 2 == 0) break;
if (((new8x8>>5)%2 + (new8x8>>20)%2 + (new8x8>>33)%2 + (new8x8>>48)%2) % 2 == 0) break;
if (((new8x8>>10)%2 + (new8x8>>27)%2 + (new8x8>>46)%2 + (new8x8>>63)%2) % 2 == 0) break;
if (((new8x8>>0)%2 + (new8x8>>17)%2 + (new8x8>>36)%2 + (new8x8>>53)%2) % 2 == 0) break;
if (((new8x8>>11)%2 + (new8x8>>27)%2 + (new8x8>>43)%2 + (new8x8>>59)%2) % 2 == 0) break;
if (((new8x8>>14)%2 + (new8x8>>30)%2 + (new8x8>>46)%2 + (new8x8>>62)%2) % 2 == 0) break;
if (((new8x8>>4)%2 + (new8x8>>20)%2 + (new8x8>>36)%2 + (new8x8>>52)%2) % 2 == 0) break;
if (((new8x8>>1)%2 + (new8x8>>17)%2 + (new8x8>>33)%2 + (new8x8>>49)%2) % 2 == 0) break;
if (((new8x8>>13)%2 + (new8x8>>30)%2 + (new8x8>>33)%2 + (new8x8>>50)%2) % 2 == 0) break;
if (((new8x8>>7)%2 + (new8x8>>20)%2 + (new8x8>>43)%2 + (new8x8>>56)%2) % 2 == 0) break;
if (((new8x8>>8)%2 + (new8x8>>27)%2 + (new8x8>>36)%2 + (new8x8>>55)%2) % 2 == 0) break;
if (((new8x8>>2)%2 + (new8x8>>17)%2 + (new8x8>>46)%2 + (new8x8>>61)%2) % 2 == 0) break;
if (((new8x8>>12)%2 + (new8x8>>30)%2 + (new8x8>>36)%2 + (new8x8>>54)%2) % 2 == 0) break;
if (((new8x8>>9)%2 + (new8x8>>27)%2 + (new8x8>>33)%2 + (new8x8>>51)%2) % 2 == 0) break;
if (((new8x8>>6)%2 + (new8x8>>20)%2 + (new8x8>>46)%2 + (new8x8>>60)%2) % 2 == 0) break;
if (((new8x8>>3)%2 + (new8x8>>17)%2 + (new8x8>>43)%2 + (new8x8>>57)%2) % 2 == 0) break;
if (((new8x8>>15)%2 + (new8x8>>29)%2 + (new8x8>>39)%2 + (new8x8>>53)%2) % 2 == 0) break;
if (((new8x8>>10)%2 + (new8x8>>24)%2 + (new8x8>>34)%2 + (new8x8>>48)%2) % 2 == 0) break;
if (((new8x8>>5)%2 + (new8x8>>23)%2 + (new8x8>>45)%2 + (new8x8>>63)%2) % 2 == 0) break;
if (((new8x8>>0)%2 + (new8x8>>18)%2 + (new8x8>>40)%2 + (new8x8>>58)%2) % 2 == 0) break;
if (((new8x8>>14)%2 + (new8x8>>29)%2 + (new8x8>>34)%2 + (new8x8>>49)%2) % 2 == 0) break;
if (((new8x8>>11)%2 + (new8x8>>24)%2 + (new8x8>>39)%2 + (new8x8>>52)%2) % 2 == 0) break;
if (((new8x8>>4)%2 + (new8x8>>23)%2 + (new8x8>>40)%2 + (new8x8>>59)%2) % 2 == 0) break;
if (((new8x8>>1)%2 + (new8x8>>18)%2 + (new8x8>>45)%2 + (new8x8>>62)%2) % 2 == 0) break;
if (((new8x8>>15)%2 + (new8x8>>28)%2 + (new8x8>>35)%2 + (new8x8>>48)%2) % 2 == 0) break;
if (((new8x8>>10)%2 + (new8x8>>25)%2 + (new8x8>>38)%2 + (new8x8>>53)%2) % 2 == 0) break;
if (((new8x8>>5)%2 + (new8x8>>22)%2 + (new8x8>>41)%2 + (new8x8>>58)%2) % 2 == 0) break;
if (((new8x8>>0)%2 + (new8x8>>19)%2 + (new8x8>>44)%2 + (new8x8>>63)%2) % 2 == 0) break;
if (((new8x8>>12)%2 + (new8x8>>28)%2 + (new8x8>>44)%2 + (new8x8>>60)%2) % 2 == 0) break;
if (((new8x8>>9)%2 + (new8x8>>25)%2 + (new8x8>>41)%2 + (new8x8>>57)%2) % 2 == 0) break;
if (((new8x8>>6)%2 + (new8x8>>22)%2 + (new8x8>>38)%2 + (new8x8>>54)%2) % 2 == 0) break;
if (((new8x8>>3)%2 + (new8x8>>19)%2 + (new8x8>>35)%2 + (new8x8>>51)%2) % 2 == 0) break;
if (((new8x8>>14)%2 + (new8x8>>28)%2 + (new8x8>>38)%2 + (new8x8>>52)%2) % 2 == 0) break;
if (((new8x8>>11)%2 + (new8x8>>25)%2 + (new8x8>>35)%2 + (new8x8>>49)%2) % 2 == 0) break;
if (((new8x8>>4)%2 + (new8x8>>22)%2 + (new8x8>>44)%2 + (new8x8>>62)%2) % 2 == 0) break;
if (((new8x8>>1)%2 + (new8x8>>19)%2 + (new8x8>>41)%2 + (new8x8>>59)%2) % 2 == 0) break;
if (((new8x8>>13)%2 + (new8x8>>28)%2 + (new8x8>>41)%2 + (new8x8>>56)%2) % 2 == 0) break;
if (((new8x8>>7)%2 + (new8x8>>22)%2 + (new8x8>>35)%2 + (new8x8>>50)%2) % 2 == 0) break;
if (((new8x8>>2)%2 + (new8x8>>19)%2 + (new8x8>>38)%2 + (new8x8>>55)%2) % 2 == 0) break;
if (((new8x8>>8)%2 + (new8x8>>25)%2 + (new8x8>>44)%2 + (new8x8>>61)%2) % 2 == 0) break;
if (((new8x8>>13)%2 + (new8x8>>29)%2 + (new8x8>>45)%2 + (new8x8>>61)%2) % 2 == 0) break;
if (((new8x8>>8)%2 + (new8x8>>24)%2 + (new8x8>>40)%2 + (new8x8>>56)%2) % 2 == 0) break;
if (((new8x8>>7)%2 + (new8x8>>23)%2 + (new8x8>>39)%2 + (new8x8>>55)%2) % 2 == 0) break;
if (((new8x8>>2)%2 + (new8x8>>18)%2 + (new8x8>>34)%2 + (new8x8>>50)%2) % 2 == 0) break;
if (((new8x8>>12)%2 + (new8x8>>29)%2 + (new8x8>>40)%2 + (new8x8>>57)%2) % 2 == 0) break;
if (((new8x8>>6)%2 + (new8x8>>23)%2 + (new8x8>>34)%2 + (new8x8>>51)%2) % 2 == 0) break;
if (((new8x8>>9)%2 + (new8x8>>24)%2 + (new8x8>>45)%2 + (new8x8>>60)%2) % 2 == 0) break;
if (((new8x8>>3)%2 + (new8x8>>18)%2 + (new8x8>>39)%2 + (new8x8>>54)%2) % 2 == 0) break;

                    //    MessageBox.Show(asd.ToString());
                        WHILE_TEST = 0;
                        SUITABLE = 1;
                    }

                    if (SUITABLE == 1)
                    {
                    	allTrueAnswers[counter]=new8x8;
                    	counter++;
                    	max=counter;
                    	
                    	
                    	char eded[65];
                    	
                    	for (int dir=63; dir>=0; dir--)
                    	{
                    		eded[dir]=new8x8%2+48;
                    		new8x8/=2;
						}
						eded[64]='\0';
						printf("%s\n", eded);
                    	
						
                    	
                    	//printf("%llu\n", allTrueAnswers[counter-1]);
                    	//if (counter==100000) break;
					 //   printf("%llu\n", new8x8);
                    	
					}
           
}

//DEBuG!!!!
printf("%d    8x8 BITTI!!!\n", max);

//system("PAUSE");
return 0;
}
