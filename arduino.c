#include
// guys download this library from arduino.cc
LiquidCrystal lcd(13, 12, 11, 10, 9, 8); // Check circuit diagram for pin
connections
void setup()
{
lcd.begin(16, 2);
}
void loop()
{
lcd.clear();
int val0 = analogRead(0); // read the input pin flex sensor pin 1
val0 = map(val0, 465, 590, 0, 9); // convert it into window of 0 to 9
int val1 = analogRead(1); // read the input pin flex sensor pin 2
val1 = map(val1, 435, 535, 0, 9);
// read the input pin
int val2 = analogRead(2); // read the input pin X axis pin
val2 = map(val2, 260, 415, 0, 9);
int val3 = analogRead(3); // read the input pin y axis pin
val3 = map(val3, 260, 420, 0, 9);
if (val0&gt;=0 &amp;&amp; val0&lt;=0 &amp;&amp; val1&gt;=3 &amp;&amp; val1&lt;=4 &amp;&amp; val2&gt;=7 &amp;&amp; val2&lt;=8
&amp;&amp; val3&gt;=4 &amp;&amp; val3&lt;=5) // match the signs to standard store values values
depend on wearing hands
{
lcd.print(&quot;I am __________________&quot;); // Show message on LCD

34

digitalWrite(0,HIGH ); // select voice command 1 on APR 33A3
digitalWrite(1,LOW );
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay (100);
digitalWrite(0, LOW); // make it off
digitalWrite(1,LOW );
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7,LOW);
delay(5000);
}
else if (val0&gt;=6 &amp;&amp; val0&lt;=7 &amp;&amp; val1&gt;=1 &amp;&amp; val1&lt;=2 &amp;&amp; val2&gt;=7 &amp;&amp;
val2&lt;=8 &amp;&amp; val3&gt;=2 &amp;&amp; val3&lt;=3)
{
lcd.print(&quot;sorry&quot;);
digitalWrite(0,LOW ); // select voice command 2 on APR 33A3

35

digitalWrite(1,HIGH);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay (100);
digitalWrite(0, LOW);
digitalWrite(1,LOW );
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7,LOW);
delay(5000);
}
else if (val0&gt;=-1 &amp;&amp; val0&lt;=0 &amp;&amp; val1&gt;=3 &amp;&amp; val1&lt;=4 &amp;&amp; val2&gt;=1 &amp;&amp;
val2&lt;=3 &amp;&amp; val3&gt;=0 &amp;&amp; val3&lt;=2)
{
lcd.print(&quot;Hello&quot;);
digitalWrite(0,LOW ); // select voice command 3 on APR 33A3
digitalWrite(1,LOW );

36

digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay (100);
digitalWrite(0, LOW);
digitalWrite(1,LOW );
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7,LOW);
delay(5000);
}
else if (val0&gt;=0 &amp;&amp; val0&lt;=0 &amp;&amp; val1&gt;=0 &amp;&amp; val1&lt;=1 &amp;&amp; val2&gt;=5 &amp;&amp;
val2&lt;=6 &amp;&amp; val3&gt;=-0 &amp;&amp; val3&lt;=1)
{
lcd.print(&quot;Thank You&quot;);
digitalWrite(0,LOW ); // select voice command 4 on APR 33A3
digitalWrite(1,LOW );
digitalWrite(2, LOW);

37

digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay (100);
digitalWrite(0, LOW);
digitalWrite(1,LOW );
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7,LOW);
delay(5000);
}
else if (val0&gt;=2 &amp;&amp; val0&lt;=3 &amp;&amp; val1&gt;=1 &amp;&amp; val1&lt;=1 &amp;&amp; val2&gt;=3 &amp;&amp;
val2&lt;=5 &amp;&amp; val3&gt;=1 &amp;&amp; val3&lt;=2)
{
lcd.print(&quot;drink&quot;);
digitalWrite(0,LOW ); // select voice command 5 on APR 33A3
digitalWrite(1,LOW );
digitalWrite(2, LOW);
digitalWrite(3, LOW);

38

digitalWrite(4, HIGH);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay (100);
digitalWrite(0, LOW);
digitalWrite(1,LOW );
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7,LOW);
delay(5000);
}
else if (val0&gt;=4 &amp;&amp; val0&lt;=5 &amp;&amp; val1&gt;=2 &amp;&amp; val1&lt;=3 &amp;&amp; val2&gt;=4 &amp;&amp;
val2&lt;=6 &amp;&amp; val3&gt;=0 &amp;&amp; val3&lt;=2)
{
lcd.print(&quot;beautiful&quot;);
digitalWrite(0,LOW ); // select voice command 6 on APR 33A3
digitalWrite(1,LOW );
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);

39

digitalWrite(5, HIGH);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay (100);
digitalWrite(0, LOW);
digitalWrite(1,LOW );
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7,LOW);
delay(5000);
}
else if (val0&gt;=0 &amp;&amp; val0&lt;=0 &amp;&amp; val1&gt;=4 &amp;&amp; val1&lt;=6 &amp;&amp; val2&gt;=4 &amp;&amp;
val2&lt;=5 &amp;&amp; val3&gt;=1 &amp;&amp; val3&lt;=2)
{
lcd.print(&quot;bye&quot;);
digitalWrite(0,LOW ); // select voice command 7 on APR 33A3
digitalWrite(1,LOW );
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);

40

digitalWrite(6, HIGH);
digitalWrite(7, LOW);
delay (100);
digitalWrite(0, LOW);
digitalWrite(1,LOW );
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7,LOW);
delay(5000);
}
else if (val0&gt;=0 &amp;&amp; val0&lt;=1 &amp;&amp; val1&gt;=0 &amp;&amp; val1&lt;=1 &amp;&amp; val2&gt;=7 &amp;&amp;
val2&lt;=8 &amp;&amp; val3&gt;=1 &amp;&amp; val3&lt;=2)
{
lcd.print(&quot;sick&quot;);
digitalWrite(0,LOW ); // select voice command 8 on APR 33A3
digitalWrite(1,LOW );
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);

41

digitalWrite(7, HIGH);
delay (100);
digitalWrite(0, LOW);
digitalWrite(1,LOW );
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7,LOW);
delay(5000);
}
else
{
lcd.print(&quot; System on &quot;); // inital message
digitalWrite(0, LOW);
digitalWrite(1,LOW );
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7,LOW);

42

}
delay(200); // delay of 200 msec
}
