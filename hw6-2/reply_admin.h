#include<string>

#ifndef reply_admin
#define reply_admin

#define NUM_OF_CHAT 200

class ReplyAdmin{
	private:
			std::string* chats;
			int count;
	public:
		ReplyAdmin();
		~ReplyAdmin();
		int getChatCount();
		bool addChat(std::string);
		bool removeChat(int);
		bool removeChat(int, int);
		friend std::ostream& operator <<(std::ostream&, ReplyAdmin&);
};
#endif
