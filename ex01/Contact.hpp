#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__

#include <string>
#include <iostream>

class Contact
{
    public:
		void SetContact (std::string FirstName, std::string LastName, std::string NickName, std::string PhoneNumber, std::string DarkestSecret);
		void ShowAllContact();
		void ShowAllContent(int count);
		void ShowLineContact(int s_count);

	Contact()
	{
	};
	
	~Contact()
	{
	};

    private:
		std::string FirstName_;
		std::string LastName_;
		std::string NickName_;
		std::string PhoneNumber_;
		std::string DarkestSecret_;	
};

bool CheckInput(std::string PhoneNumber);
void PrintHeader();
void PrintGuide();
bool get_input(std::string& input);


#endif


  
/*
設計

実行
ADD
SEARCH
EXIT
の三つを待機


ADDする、格納
SEARCHで見られる。
EXITでプログラム終了


１、入力コマンドを待機
２、判定
    ADD
        情報を入力させる。
            プログラム開始時に８個分の容量を確保してそのアドレスに書いてくのがよさそう
            ８件以上の追加ならindex 0が置き換え
    SEARCH
        格納した情報を表示
            ベースの部分を描く
            メモリは特定の部分を表示するので変えなくていいはず。
    EXIT
３、ループ


while(1)
{
    phone_listinit // いらないかも
    command = command_input //必須
    if(add)
        add_contact // ここめんどいかも
    if(search)
        search_contact // どうやって違うオブジェクトのを正確に表示させるか
    if(exit)

}


phone_listinit ()

string command_input
    cin
    return

void add_contact(phone_list)
    Contactはstaticか第二引数で何回目かを判断しつつ格納
    何を呼んでどうやっていれるのか。


    入力を受け取りまくり、ぶちこむ

void search_contact(phone_list)
    8つの概要を表示する
    何番目のインデックスかを指定し、それを表示する。




オブジェクト指向
    クラス外から追加とかメモリいじるの良くない気がする
*/