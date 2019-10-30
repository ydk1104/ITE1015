class MessageBook {
public:
	MessageBook();
	~MessageBook();
	void AddMessage(int number, const std::string& message);
	void DeleteMessage(int number);
	const std::string& GetMessage(int number) const;
	void print()const;

private:
	std::map<int, std::string> messages_;
};
