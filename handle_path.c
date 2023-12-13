#include "shell.h"
void handl_path(char *args)
{
  char *env_path = getenv("PATH");
  char *path = my_strdup(env_path);
  char token = strtok(path,":");
 if(env_path == NULL)
    {
      perror("path not found");
    }
if(access(args[0],X_OK) == 0)
  {
    execute_command(args);
  }
else
{
  while(token != NULL)
    {

    }
}
}
