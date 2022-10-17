// Float4.cpp
#include "Float4.h"

void Float4::SetIndex(int _Index, float _Value)
{
	m_Values[_Index] = _Value;
}

float Float4::GetIndex(int _Index) const
{
	return m_Values[_Index] ;
}
 
Float4::Float4()
{
	for (int i = 0; i < s_Dimension; i++)
	{
		m_Values[i] = 0.0f;
	}
}

Float4::Float4(float Vector[s_Dimension])
{
	for (int i = 0; i < s_Dimension; i++)
	{
		m_Values[i] = Vector[i];
	}
}

void Float4::Add(float _GivenVector[s_Dimension])
{
	for (int i = 0; i < s_Dimension; i++)
	{
		_GivenVector[i] += m_Values[i];
	}
}