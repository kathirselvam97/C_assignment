#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>

bool is_delim(char c, char *delim)
{
	  while(*delim != '\0')
		    {
				    if(c == *delim)
						      return true;
					    delim++;
						  }
	    return false;
}

char *strtok1(char *s, char *delim)
{
	  static char *p; // start of the next search 
	    if(!s)
			  {
				      s = p;
					    }
		  if(!s)
			    {
					    // user is bad user 
					    return NULL;
						  }

		    // handle beginning of the string containing delims
		    while(1)
				  {
					      if(is_delim(*s, delim))
							      {
									        s++;
											      continue;
												      }
						      if(*s == '\0')
								      {
										        return NULL; // we've reached the end of the string
												    }
							      // now, we've hit a regular character. Let's exit the
							      // loop, and we'd need to give the caller a string
							      // that starts here.
							      break;
								    }

			  char *ret = s;
			    while(1)
					  {
						      if(*s == '\0')
								      {
										        p = s; // next exec will return NULL
												      return ret;
													      }
							      if(is_delim(*s, delim))
									      {
											        *s = '\0';
													      p = s + 1;
														        return ret;
																    }
								      s++;
									    }
}

int main()
{
	  // char s[] = "     'hi;;;there;';how'are you'''";
	  char s[] = "'''hi there Its Me kathir";
	    char *delim = "; '";
		  char *p = strtok1(s, delim);
		    while(p)
				  {
					      printf("%s\n", p);
						      p = strtok1(NULL, delim);
							    }
}
