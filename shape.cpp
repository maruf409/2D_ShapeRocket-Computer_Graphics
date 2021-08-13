void circle(float radius_x, float radius_y)
{
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * radius_x, sin(angle) * radius_y);
			//glVertex2f (cos(angle) * radius_x+5, sin(angle) * radius_y);
		}

	glEnd();
}
void Rocket(){
glPushMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
        glColor3f(0.33,0.38,0.44);
        glVertex2f(-9,25);
        glVertex2f(-20,55);
        glVertex2f(-13,65);
        glVertex2f(13,65);
        glVertex2f(20,55);
        glVertex2f(9,25);
    glEnd();
    glPopMatrix();
        glPushMatrix();/// Right hand
        glBegin(GL_TRIANGLES);
            glColor3f(0.43,0.61,0.76);
            glVertex2f(13,36);
            glVertex2f(21,19);
            glVertex2f(9,25);
        glEnd();
        glPopMatrix();
                glPushMatrix();/// Left hand
        glBegin(GL_TRIANGLES);
            glColor3f(0.43,0.61,0.76);
            glVertex2f(-13,36);
            glVertex2f(-21,19);
            glVertex2f(-9,25);
        glEnd();
        glPopMatrix();
                glPushMatrix();///head
        glBegin(GL_TRIANGLES);
            glColor3f(0.0,0.26,0.15);
            glVertex2f(-13,65);
            glVertex2f(0,88);
            glVertex2f(13,65);
        glEnd();
        glPopMatrix();
        glPushMatrix();///Window
        glTranslatef(0,50,0);
        circle(9,9);
        glPopMatrix();
glPopMatrix();
}
