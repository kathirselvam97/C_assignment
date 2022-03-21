void NPRSString(char str[] , int len, int k);

int main()
{
	    int n, k, i, j;
		    char kdistinct[MAXLEN];
			    
			    printf("Enter the value of n: ");
				    scanf("%d", &n);
					    
					    /* boundary check */
					    /* Error Check for limit */
					    if ((n < MINVAL) || (n > MAXVAL))
							    {
									        printf("Error: Invalid Number. Retry\n");
											        return 1;
													    }
						    
						    printf("Enter the value of k: ");
							    scanf("%d", &k);
								    /* Error Check for limit */
								    if ((k < 1) || (k > 10))
										    {
												        printf("Error: Invalid Number. Retry\n");
														        return 1;
																    }
									    
									    printf("Enter the k disctint characters: \n");
										    for (i = 0; i < k; i++)
												    {
														          scanf("\n%c", &kdistinct[i]);
																      }
											    
											    /* check for distinct characters */
											    for (i = 0; i < k; i++)
													    {
															        for (j = (i+1); j < k; j++)
																		        {
																					            if(kdistinct[j] == kdistinct[i] )
																									            {
																													                printf("Error: values are not distinct.\n");
																																	                return 1;
																																					            }
																								        }
																	    }
												    
												    NPRSString(kdistinct, n, k);
													      return 0;
}

void NPRSString(char str[] , int len, int k)
{
	    int i, val = 0, count = 0;
		    
		    for (i = 0; i < len; i++)
				    {
						        if(i%k == 0 && i != 0)
											{
															val++;
																	}
								        printf("%c", *(str+((i+val)%k)));
										    }
			    
}
