#ifndef SDI_CARD_H
#define SDI_CARD_H

#include <string>
#include <vector>

namespace SDI_REVIEW
{
	class Card
	{
		// data members
	private:
		int suit_;
		int faceValue_;
		std::vector<std::string>suitNames;
		std::vector<std::string>faceNames;

		
		//interface functions
	public:
		Card(int cardNum);			//Constructor (parameterised)
		std::string toString();

		//private functions
	private:
		std::string suitName(int suitNum);
		std::string faceName(int faceVal);
	};

}  //namespace
#endif