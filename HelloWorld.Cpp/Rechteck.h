#pragma once
struct Rechteck
{
	int _breite;
	int _h�he;

	explicit Rechteck(int seitenl�nge)
		: _breite(seitenl�nge), _h�he(seitenl�nge)
	{
		
	}

	Rechteck(int breite, int h�he)
		: _breite(breite), _h�he(h�he)
	{
	}

	int BerechneFl�che() const
	{
		return _breite * _h�he;
	}

	bool operator <(const Rechteck& anderesRechteck)
	{
		return BerechneFl�che() < anderesRechteck.BerechneFl�che();
	}
};

