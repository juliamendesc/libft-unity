#include <stdlib.h>
#include "tests.h"
#include "utils.h"

t_list	*list_tofree;

void	setUp()
{
	list_tofree = NULL;
}

void	tearDown()
{
	t_list	*cur = list_tofree;
	t_list	*tmp = NULL;

	while (cur)
	{
		tmp = cur->next;
		free(cur);
		cur = tmp;
	}
}

int	main(void)
{
	catch_signals();

	UNITY_BEGIN();
	
	RUN_TEST(ft_lstlast_simple_test);
	RUN_TEST(ft_lstlast_size1);

	return (UNITY_END());
}
