#include<stdio.h>
void print_sort(int *arr, int size);

int main()
{
	    int size, iter;

		    printf("Enter the size of the array : ");
			    scanf("%d", &size);

				    int arr[size];

					    printf("Enter the elements: ");
						    for (iter = 0; iter < size; iter++)
								    {
										        scanf("%d", &arr[iter]);
												    }

							    print_sort(arr, size);
									printf("Original array values ");
										for(iter = 0; iter<size; iter++)
												{
															printf("%d ", arr[iter]);
																}
											printf("\n");
												return 0;
}

void print_sort(int *arr, int size)
{
		int smallest = arr[0],i,j,k,smallest1 = 0,index1,index, largest = arr[0];
			int temp,second = 0,index2;
				for (i=0; i<size; i++)
						{
									if (largest < arr[i])
												{
																largest = arr[i];
																			index1 = i;
																					}
										}
					for(i=0; i<size; i++)
							{
										if(index1!=i && arr[i]>second)
													{
																	second = arr[i];
																				index2 = i;
																						}
											}
						for ( i=0; i<size; i++)
								{
												if(smallest > arr[i])
																{
																					
																					smallest = arr[i];
																									index = i;
																												}
													}
							printf("sorted order of array is %d ", smallest);
								for(i=0; i<size; i++)
										{
														if(index!=i && index1 != i && index2 != i && arr[i] > smallest &&  arr[i]<second && arr[i] < largest)
																		{
																						
																							smallest1 = arr[i];
																										}
																else
																				continue;
																		printf("%d ", smallest1);
																			}
									printf("%d %d",second, largest);
										
										printf("\n");
										//	printf("%d\n",largest);
}

