#ifndef ANGLEFUNCSDLL_EXPORTS
#define ANGLEFUNCSDLL_API __declspec(dllexport)
#else
#define ANGLEFUNCSDLL_API __declspec(dllimport)
#endif
#pragma once
#include <iostream>
#include <math.h>
namespace Anglefuncsdll {
	class Angle {

	public:
		int degrees; //Значення градусів
		double minutes;  //Значення хвилин
		/*Розділення значень градусів і кутів було зроблено для зручного підрахунку значення кута в радіанах,
										бо значення хвилин рахується окремо. Хвилини треба поділити на 60. */
		ANGLEFUNCSDLL_API Angle Init(int d, float m);
		ANGLEFUNCSDLL_API Angle Read(int d, float m);
		ANGLEFUNCSDLL_API void Display();
		ANGLEFUNCSDLL_API char toString();

		ANGLEFUNCSDLL_API Angle();
		ANGLEFUNCSDLL_API Angle(const Angle& ref_angle);
		ANGLEFUNCSDLL_API Angle(int m_degrees, double m_minutes);

		ANGLEFUNCSDLL_API Angle& operator++ ();
		ANGLEFUNCSDLL_API Angle& operator-- ();
		ANGLEFUNCSDLL_API Angle operator+(const Angle& ref_angle);


	private:

		ANGLEFUNCSDLL_API float Radian();
		ANGLEFUNCSDLL_API float constrainAngle360();
		ANGLEFUNCSDLL_API float increaseAngle();
		ANGLEFUNCSDLL_API float reductionAngle();
		ANGLEFUNCSDLL_API float Sinus();
		ANGLEFUNCSDLL_API float comparsionAngle();

	};
}
