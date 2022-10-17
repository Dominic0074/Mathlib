// Float4.h
#pragma once

class Float4
{
public:

	// Public vars

	static constexpr int s_Dimension = 4;

	void SetIndex(int _Index, float _Value);
	float GetIndex(int _Index) const;

	void Add(float _GivenVector[s_Dimension]);

	// Constructor
	Float4();
	Float4(float Vector[s_Dimension]);

private:

	// Private Vars

	float m_Values[s_Dimension];
};