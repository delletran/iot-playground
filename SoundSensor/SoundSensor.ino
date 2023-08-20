

int sound_sensor = A0; //assign to pin A2
 
void setup() 
{
  Serial.begin(9600); //begin Serial Communication
}
 
void loop()
{
  test_input()
}