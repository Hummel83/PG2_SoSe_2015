#pragma once
class Rechteck
{
private:
	int _breite;
	int _h�he;
public:
	explicit Rechteck(int seitenl�nge)
		: _breite(seitenl�nge), _h�he(seitenl�nge)
	{
		
	}

	Rechteck(int breite, int h�he)
		: _breite(breite), _h�he(h�he)
	{
	}

	int BerechneFl�che()
	{
		return _breite * _h�he;
	}
};

