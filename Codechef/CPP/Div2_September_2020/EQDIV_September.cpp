#include <bits/stdc++.h>
typedef long long int lli;
#define mod 1000000007
#define MOD 1003
#define li long int
using namespace std;
#define lld long long double


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string sors[]={"","1","01","001","1001","00101","000011","1000011"};
    string stors[]={"","1","01","001","0001","01001","101001","1101001","01101001","011000101","0100100101","10111000101","000000001101","0001000010011","11010000001011","110010000000111"};
    string strs[]={"","0","01","001","0001","00001","100001","0001110","11001001","011010110","0000000101","11110010110","110100011001","1100001010110","01011001101001","110000101000011","1001011001101001","00110100110010110","010011010101011010","0011001001011000011","10100000001000000111","011000000001010010011","0000000000000001000111","10000000000011101110001","000000000000101011110001","0000000000001101011110010","01001000000000111101101100","100000000000001011111000110","0100100000000000010110111100","10000000000000111010110100110","111100000000000101000001101101","0001000000000001010101001001011"};
    string sfrs[]={"","0","10","110","1110","11110","111110","1111110","11010001","111110001","1010110110","11111010110","110010101001","1101001010110","11111110000101","100001110101001","0000111000001110","00000010110010110","111111001011110001","0001100111111001001","00001010110111011100","111111111011011011100","0000100101101110000011","00000011011000111011100","000000100111111111100001","0000000010101011110000011","11101011111011101111001010","000000101010110011001101001","0000000010001100101111111000","11101111111011001110111010001","000000000010100011011110101100","0000000000001011111101111010100","01101001100101101001011001101001","000000000010001010111100001010101","0000010000000100000101010000011101","00000000001010101100001011010010101","000000000000100001111011111010111000","0000000001010000000000010110010111010","00000000000000011011101011011100101010","000000000000000110101011101000101011001","0000000000000010101001011110111010111000","00000000000000000010111011100010111000101","000000000000000000010010000000000110010111","0000000000000000101111101111111110000110001","00000000000000000111110110101110101100101010","000000000000000000010100100000000110010011011","0000000000000000000011011011101010001110101010","00000000000000000010101011011110111010101001001","000000000000000000100010111011101010011001101010","0000000000000000000010101010111110001011101000101","00000000000000000000000000000000010010101100011011","000000000000000000001110101000111000101010101010110","0000000000000000000010101111110111101010100110111000","00000000000000000000000000000001110010100101011010110","000000000000000000000001101111101010101011001010001110","0000001101100011101110001101001100101101001011001101001","00000010011111111110000101101001100101101001011001101001","000000001010101111000001101101001100101101001011001101001","0000000000000000000000000000000000000011001010011010110011","00000010101011001100110100101101001100101101001011001101001","000000001000110010111111100001101001100101101001011001101001","0000000000000000000000000000000000000000101010111111011100001","00000000001010001101111010110001101001100101101001011001101001","000000000000101111110111101010001101001100101101001011001101001","0110100110010110100101100110100101101001100101101001011001101001"};
    int sori[]={0,1,1,0,0,1,1,0};
    int stori[]={0,1,3,4,2,3,1,0,0,1,1,0,0,1,1,0};
    int stri[]={0,1,7,18,28,25,7,26,4,5,1,12,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0};
    int sfri[]={0,1,15,64,158,271,317,126,34,253,13,92,30,47,31,2,0,1,13,0,0,9,1,0,0,1,5,0,0,5,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0};
    int k;
    cin>>k;
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        if (k==1){
            if (n<=7){
                cout<<sori[n]<<'\n';
                cout<<sors[n]<<'\n';
            } else{
                int srep,srei;
                string sres;
                srep=(n-4)/4;
                srei=sori[n-srep*4];
                string first="";
                for (int i=0;i<srep;i++){
                    first+="0110";
                }
                sres = sors[n-srep*4]+first;
                cout<<srei<<'\n';
                cout<<sres<<'\n';
            }
        } else if (k==2){
            if (n<=15){
                cout<<stori[n]<<'\n';
                cout<<stors[n]<<'\n';
            }else{
                int srep,srei;
                string sres;
                srep=(n-8)/8;
                srei=stori[n-srep*8];
                string first="";
                for (int i=0;i<srep;i++){
                    first+="01101001";
                }
                sres=stors[n-srep*8]+first;
                cout<<srei<<'\n';
                cout<<sres<<'\n';

            }
        } else if (k==3){
            if (n<=31){
                cout<<stri[n]<<'\n';
                cout<<strs[n]<<'\n';
            }else{
                int srep,srei;
                string sres;
                srep=(n-16)/16;
                srei=stri[n-srep*16];
                string first="";
                for (int i=0;i<srep;i++){
                    first+="0110100110010110";
                }
                sres=strs[n-srep*16]+first;
                cout<<srei<<'\n';
                cout<<sres<<'\n';

            }
        } else{
            if (n<=63){
                cout<<sfri[n]<<'\n';
                cout<<sfrs[n]<<'\n';

            }else{
                int srep,srei;
                string sres;
                srep=(n-32)/32;
                srei=sfri[n-srep*32];
                string first="";
                for (int i=0;i<srep;i++){
                    first+="01101001100101101001011001101001";
                }
                sres=sfrs[n-srep*32]+first;
                cout<<srei<<'\n';
                cout<<sres<<'\n';
            }
        }
    }


}
