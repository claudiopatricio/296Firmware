//------------------------------
//-----------LOOP---------------
//------------------------------

void loop()
{

	//-------------------------
	//-----ESSENTIALS----------
	//-------------------------
	processCommands();

	globalClock = millis();

	rotaryField = 0;
	buttonField = 0;
	matrix();

	runningPresets();

	//------------------------------------
	//---------SWITCHES START HERE--------
	//------------------------------------




	//------------------------------------
	//----------SWITCHES END HERE---------
	//------------------------------------


	Joystick.setZAxis(rotaryField - 32767);
	Joystick.setYAxis(buttonField - 32767);

	Joystick.sendState();
}
