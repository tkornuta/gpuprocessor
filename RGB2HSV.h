/*!
 * \file RGB2HSV.h
 * \brief Color transformation class.
 * \author Mateusz Pruchniak
 * \date 2010-05-05
 */

#pragma once
#include "transformation.h"

/*!
 * \class RGB2HSV
 * \brief Color transformation class.
 * \author Mateusz Pruchniak
 * \date 2010-05-05
 */
class RGB2HSV :
	public Transformation
{
public:

	/*!
	* Default constructor.
	*/
	RGB2HSV(void);

	/*!
	* Destructor.
	*/
	~RGB2HSV(void);

	/*!
	* Constructor.
	*/
	RGB2HSV(cl_context GPUContext ,GPUTransferManager* transfer);

	/*!
	* Start filtering.
	*/
	bool filter(cl_command_queue GPUCommandQueue);

};

