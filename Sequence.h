#ifndef __SEQUENCE_H__
#define __SEQUENCE_H__
//! \brief Klasa reprezentująca zastosowanie Twierdzenia Fubiniego
//!
class Sequence
{
public:


	//! \brief Konstruktor z parametrem domyślnym \a n.
	Sequence(int n=0);
//!
	//! \brief Destruktor
	~Sequence();
	//! \brief Konstruktor kopiujący
	Sequence (const Sequence & fSequence);
};
#endif