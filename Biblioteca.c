#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define Verdadero 1
#define Falso 0
#define TAM 100

// Variables para la simulación (Administración Usuarios)
char usuarios[TAM][50];
int matriculas[TAM];
int totalUsuarios = 0;
char ConfirmarUsuario[50];

// Variables para la simulación (Administración Libros)
char titulos[TAM][100];
char autores[TAM][100];
int idLibros[TAM];
char categoria[TAM][40];
int libroDisponible[TAM]; 
int contCategoria[11] = {0}; 
int BuscarID;
int IDRep, EncontrarLibro;
char ConfirmarLibro[50];
int totalLibros = 0;

char Confirmar[50];

// Menús Principales
void UsuariosMenu();
void LibrosMenu();
void DevolucionesMenu();
void ReportesMenu();

// Menús Administración de usuarios
void RegistroUsu();
void ModificarInf();
void BuscarUsu();
void ConsultarUsuRegistrados();
void EliminarUsu();

// Menús Administración de Libros
void RegistrarLibros();
void ModificarLibros();
void EliminarLibros();
void BuscarLibros();
void ConsultarDisponibilidad();
void ClasificarCategoria();

// Menús Préstamos/Devoluciones
void RegistrarPrestamo();
void RegistrarDevolucion();

// Menús Reportes
void LibrosDisponibles();
void LibrosPrestados();
void UsuariosResgistrados();
void HistorialPrestamos();
void HistorialDevoluciones();
void LibrosMayorPrestamos();
void UsuariosPrestamosActivos();

int main()
{
    int op;
    do
    {
        printf("------------------------------------------------------------------\n");
        printf("|                           Smart Library                        |\n");
        printf("------------------------------------------------------------------\n");
        printf("|Bienvenido a nuestra biblioteca digital                         |\n");
        printf("|A continuacion puedes elegir la accion que deseas realizar:     |\n");
        printf("|                                                                |\n");
        printf("|        1.-                    Administracion de Usuarios.      |\n");
        printf("|        2.-                     Administracion de Libros.       |\n");
        printf("|        3.-                         Prestamos/Devoluciones.     |\n");
        printf("|        4.-                                   Reportes.         |\n");
        printf("|        0.-                     Salir de la biblioteca.         |\n");
        printf("------------------------------------------------------------------\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            UsuariosMenu();
            break;
        case 2:
            LibrosMenu();
            break;
        case 3:
            DevolucionesMenu();
            break;
        case 4:
            ReportesMenu();
            break;
        case 0:
            printf("Saliendo de la biblioteca, vuelva pronto\n");
            break;
        default:
            printf("Esa opcion no existe\n");
            break;
        }
    } while (op != 0);

    return 0;
}

void UsuariosMenu()
{
    int opUsuarios;
    do
    {
        printf("-----------------------------------------------------------------\n");
        printf("|                    Administracion de Usuarios                 |\n");
        printf("-----------------------------------------------------------------\n");
        printf("|Bienvenido a nuestra biblioteca digital                         |\n");
        printf("|A continuacion puedes elegir la accion que deseas realizar:     |\n");
        printf("|                                                                |\n");
        printf("|        1.-                           Registro de Usuarios.     |\n");
        printf("|        2.-                          Modificar informacion.     |\n");
        printf("|        3.-                               Buscar Usuarios.      |\n");
        printf("|        4.-                          Usuarios registrados.      |\n");
        printf("|        5.-                         Eliminar Usuarios.      |\n");
        printf("|        0.-                     Salir de la biblioteca.         |\n");
        printf("-----------------------------------------------------------------\n");
        scanf("%d", &opUsuarios);
        switch (opUsuarios)
        {
        case 1:
            RegistroUsu();
            break;
        case 2:
            ModificarInf();
            break;
        case 3:
            BuscarUsu();
            break;
        case 4:
            ConsultarUsuRegistrados();
            break;
        case 5:
            EliminarUsu();
            break;
        case 0:
            printf("Saliendo al menu principal\n");
            break;
        default:
            printf("Esa opcion no existe\n");
            break;
        }
    } while (opUsuarios != 0);
}

void LibrosMenu()
{
    int opLibros;
    do
    {
        printf("-----------------------------------------------------------------\n");
        printf("|                   Administracion de libros                    |\n");
        printf("-----------------------------------------------------------------\n");
        printf("|Bienvenido a nuestra biblioteca digital                         |\n");
        printf("|A continuacion puedes elegir la accion que deseas realizar:     |\n");
        printf("|                                                                |\n");
        printf("|        1.-                             Registrar libros.       |\n");
        printf("|        2.-                              Modificar libros.      |\n");
        printf("|        3.-                               Eliminar libros.      |\n");
        printf("|        4.-                                  Buscar libros.     |\n");
        printf("|        5.-                      Consultar disponibilidad.      |\n");
        printf("|        6.-               Clasificar libros por categoria.      |\n");
        printf("|        0.-                     Salir de la biblioteca.         |\n");
        printf("-----------------------------------------------------------------\n");
        scanf("%d", &opLibros);
        switch (opLibros)
        {
        case 1:
            RegistrarLibros();
            break;
        case 2:
            ModificarLibros();
            break;
        case 3:
            EliminarLibros();
            break;
        case 4:
            BuscarLibros();
            break;
        case 5:
            ConsultarDisponibilidad();
            break;
        case 6:
            ClasificarCategoria();
            break;
        case 0:
            printf("Saliendo al menu principal\n");
            break;
        default:
            printf("Esa opcion no existe\n");
            break;
        }
    } while (opLibros != 0);
}

void DevolucionesMenu()
{
    int opPresDev;
    do
    {
        printf("-----------------------------------------------------------------\n");
        printf("|                     Prestamos/Devoluciones.                   |\n");
        printf("-----------------------------------------------------------------\n");
        printf("|Bienvenido a nuestra biblioteca digital                         |\n");
        printf("|A continuacion puedes elegir la accion que deseas realizar:     |\n");
        printf("|                                                                |\n");
        printf("|        1.-                         Registrar un prestamo.      |\n");
        printf("|        2.-                      Registrar una devolucion.      |\n");
        printf("|        0.-                     Salir de la biblioteca.         |\n");
        printf("-----------------------------------------------------------------\n");
        scanf("%d", &opPresDev);
        switch (opPresDev)
        {
        case 1:
            RegistrarPrestamo();
            break;
        case 2:
            RegistrarDevolucion();
            break;
        case 0:
            printf("Saliendo al menu principal\n");
            break;
        default:
            printf("Esa opcion no existe\n");
            break;
        }
    } while (opPresDev != 0);
}

void ReportesMenu()
{
    int opReportes;
    do
    {
        printf("-----------------------------------------------------------------\n");
        printf("|                            Reportes                           |\n");
        printf("-----------------------------------------------------------------\n");
        printf("|Bienvenido a nuestra biblioteca digital                         |\n");
        printf("|A continuacion puedes elegir la accion que deseas realizar:     |\n");
        printf("|                                                                |\n");
        printf("|        1.-                                Libros disponibles.  |\n");
        printf("|        2.-                                Libros prestados.    |\n");
        printf("|        3.-                            Usuarios registrados.    |\n");
        printf("|        4.-                            Historial de prestamos.  |\n");
        printf("|        5.-                         Historial de devoluciones  |\n");
        printf("|        6.-           Libros con mayor numero de prestamos.     |\n");
        printf("|        7.-                     Usuarios con prestamos activos. |\n");
        printf("|        0.-                     Salir de la biblioteca.         |\n");
        printf("-----------------------------------------------------------------\n");
        scanf("%d", &opReportes);
        switch (opReportes)
        {
        case 1:
            LibrosDisponibles();
            break;
        case 2:
            LibrosPrestados();
            break;
        case 3:
            UsuariosResgistrados();
            break;
        case 4:
            HistorialPrestamos();
            break;
        case 5:
            HistorialDevoluciones();
            break;
        case 6:
            LibrosMayorPrestamos();
            break;
        case 7:
            UsuariosPrestamosActivos();
            break;
        case 0:
            printf("Saliendo al menu principal\n");
            break;
        default:
            printf("Esa opcion no existe\n");
            break;
        }
    } while (opReportes != 0);
}

// ADMINISTRACION DE USUARIOS
void RegistroUsu()
{
    char Usuario[50];
    int Matricula, matricularep;
    int x;

    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Usuarios                 |\n");
    printf("|                                    > Registro de Usuario      |\n");
    printf("-----------------------------------------------------------------\n");
    printf("|Aqui podras crearte un usuario, utilizaras tu matricula.        |\n");
    printf("-----------------------------------------------------------------\n");
    do
    {
        printf("|>Ingresa tu nombre de usuario                                  |\n");
        printf("|>Sin espacios y solo 8 caracteres TAMimo:                      |\n");
        scanf("%49s", Usuario);
        if (strlen(Usuario) > 8)
        {
            printf("|El nombre de usuario solo admite 8 caracteres                  |\n");
        }
    } while (strlen(Usuario) > 8);

    do
    {
        matricularep = Falso;
        printf("|> Ingresa tu matricula (9 digitos):                            |\n");
        scanf("%d", &Matricula);
        if (Matricula > 999999999 || Matricula < 100000000)
        {
            printf("|La matricula debe ser de 9 digitos                             |\n");
        }
        else
        {
            for (x = 0; x < totalUsuarios; x++)
            {
                if (matriculas[x] == Matricula)
                {
                    printf("Esta matricula ya existe\n");
                    matricularep = Verdadero;
                }
            }
        }
    } while (!((Matricula <= 999999999 && Matricula >= 100000000) && !matricularep));

    matriculas[totalUsuarios] = Matricula;
    strcpy(usuarios[totalUsuarios], Usuario);
    totalUsuarios++;

    printf("-----------------------------------------------------------------\n");
    printf("|Usuario creado con exito.                                      |\n");
    printf("-----------------------------------------------------------------\n");
}

void ModificarInf()
{
    char UsuarioNuevo[50];
    int BuscarMatricula, Matriculaencontrada;
    int x;

    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Usuarios                 |\n");
    printf("|                                   > Modificar Informacion     |\n");
    printf("-----------------------------------------------------------------\n");
    printf("|Aqui podras cambiar tu nombre de usuario, tu matricula es tu.   |\n");
    printf("|identificador unico                                             |\n");
    printf("-----------------------------------------------------------------\n");
    printf("|>Ingresa tu matricula:                                         |\n");
    scanf("%d", &BuscarMatricula);

    if (totalUsuarios == 0)
    {
        printf("El registro esta vacio, puedes registrarte en Registro de Usuario.\n");
    }
    else
    {
        Matriculaencontrada = Falso;
        for (x = 0; x < totalUsuarios; x++)
        {
            if (matriculas[x] == BuscarMatricula)
            {
                printf("|Matricula Encontrada                                           |\n");
                Matriculaencontrada = Verdadero;
                do
                {
                    printf("|> Ingresa el nuevo usuario                                     |\n");
                    printf("|>Sin espacios y solo 8 caracteres TAMimo:                      |\n");
                    scanf("%49s", UsuarioNuevo);
                    if (strlen(UsuarioNuevo) > 8)
                    {
                        printf("|El nombre de usuario solo admite 8 caracteres                  |\n");
                    }
                } while (strlen(UsuarioNuevo) > 8);
                strcpy(usuarios[x], UsuarioNuevo);
            }
        }
        if (!Matriculaencontrada)
        {
            printf("Esta matricula no existe\n");
        }
        else
        {
            printf("-----------------------------------------------------------------\n");
            printf("|Usuario cambiado con exito: %-8s                           |\n", UsuarioNuevo);
            printf("-----------------------------------------------------------------\n");
        }
    }
}

void BuscarUsu()
{
    int BuscarMatricula, Matriculaencontrada;
    int x;

    if (totalUsuarios == 0)
    {
        printf("El registro esta vacio, puedes registrarte en Registro de Usuario.\n");
    }
    else
    {
        printf("-----------------------------------------------------------------\n");
        printf("|                    Administracion de Usuarios                 |\n");
        printf("|                                    > Buscar Usuario           |\n");
        printf("-----------------------------------------------------------------\n");
        printf("|Aqui podras buscar a un usuario miediante su matricula          |\n");
        printf("-----------------------------------------------------------------\n");
        printf(">Ingresa la matricula\n");
        scanf("%d", &BuscarMatricula);
        Matriculaencontrada = Falso;
        for (x = 0; x < totalUsuarios; x++)
        {
            if (matriculas[x] == BuscarMatricula)
            {
                printf("-----------------------------------------------------------------\n");
                printf("|Usuario encontrado                                             |\n");
                printf("-----------------------------------------------------------------\n");
                printf("|            Matricula           |           Usuario            |\n");
                printf("-----------------------------------------------------------------\n");
                printf("|            %-9d           :           %-8s           |\n", matriculas[x], usuarios[x]);
                printf("-----------------------------------------------------------------\n");
                Matriculaencontrada = Verdadero;
            }
        }
        if (!Matriculaencontrada)
        {
            printf("Matricula inexistente\n");
        }
    }
}

void ConsultarUsuRegistrados()
{
    int x;

    if (totalUsuarios == 0)
    {
        printf("El registro esta vacio, puedes registrarte en Registro de Usuario.\n");
    }
    else
    {
        printf("-----------------------------------------------------------------\n");
        printf("|                    Administracion de Usuarios                 |\n");
        printf("|                            > Consultar Usuarios Registrados   |\n");
        printf("-----------------------------------------------------------------\n");
        printf("|            Matricula           |           Usuario            |\n");
        printf("-----------------------------------------------------------------\n");
        for (x = 0; x < totalUsuarios; x++)
        {
            printf("|            %-9d           :           %-8s           |\n", matriculas[x], usuarios[x]);
        }
        printf("-----------------------------------------------------------------\n");
    }
}

void EliminarUsu()
{
    int BuscarMatricula, Matriculaencontrada;
    int x, j, i;

    if (totalUsuarios == 0)
    {
        printf("El registro esta vacio, puedes registrarte en Registro de Usuario.\n");
    }
    else
    {
        printf("-----------------------------------------------------------------\n");
        printf("|                    Administracion de Usuarios                 |\n");
        printf("|                                     > Eliminar Usario         |\n");
        printf("-----------------------------------------------------------------\n");
        printf("|Aqui podras eliminar a un usuario miediante su matricula        |\n");
        printf("-----------------------------------------------------------------\n");
        printf(">Ingresa la matricula\n");
        scanf("%d", &BuscarMatricula);
        Matriculaencontrada = Falso;
        for (x = 0; x < totalUsuarios; x++)
        {
            if (matriculas[x] == BuscarMatricula)
            {
                printf("-----------------------------------------------------------------\n");
                printf("|Usuario encontrado                                             |\n");
                printf("-----------------------------------------------------------------\n");
                printf("|            Matricula           |           Usuario            |\n");
                printf("-----------------------------------------------------------------\n");
                printf("|            %-9d           :           %-8s           |\n", matriculas[x], usuarios[x]);
                printf("-----------------------------------------------------------------\n");
                printf("¿Estas seguro de eliminar el usuario? Si/No\n");
                scanf("%49s", ConfirmarUsuario);
                
                for (i = 0; ConfirmarUsuario[i] != '\0'; i++)
                {
                    ConfirmarUsuario[i] = tolower((unsigned char)ConfirmarUsuario[i]);
                }
                if (strcmp(ConfirmarUsuario, "si") == 0)
                {
                    for (j = x; j < totalUsuarios - 1; j++)
                    {
                        matriculas[j] = matriculas[j + 1];
                        strcpy(usuarios[j], usuarios[j + 1]);
                    }
                    totalUsuarios--;
                    printf("-----------------------------------------------------------------\n");
                    printf("|Usuario Eliminado                                              |\n");
                    printf("-----------------------------------------------------------------\n");
                }
                else
                {
                    printf("-----------------------------------------------------------------\n");
                    printf("|Eliminación Cancelada                                          |\n");
                    printf("-----------------------------------------------------------------\n");
                }
                Matriculaencontrada = Verdadero;
            }
        }
        if (!Matriculaencontrada)
        {
            printf("Matricula inexistente\n");
        }
    }
}

// ADMINISTRACION DE LIBROS
void RegistrarLibros()
{
    char TituloLibro[100], AutorLibro[100], CategoriaLibro[40];
    int opCategoria, CantCopias, LibrosID;
    int x;

    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Libros                   |\n");
    printf("|                                     > Registrar Libros        |\n");
    printf("-----------------------------------------------------------------\n");
    printf("|Aqui podras registrar un libro, medante su categoria, titulo    |\n");
    printf("|y autor                                                         |\n");
    printf("-----------------------------------------------------------------\n");
    do
    {
        printf(">Que categoria es el libro\n");
        printf("-----------------------------------------------------------------\n");
        printf("| CATEGORIAS:                                                   |\n");
        printf("|        1.- Medicina y Salud                                   |\n");
        printf("|        2.- Derecho y Ciencias Sociales                        |\n");
        printf("|        3.- Contaduria y Administracion                        |\n");
        printf("|        4.- Ingenieria y Sistemas                              |\n");
        printf("|        5.- Humanidades y Pedagogia                            |\n");
        printf("|        6.- Ciencias Agropecuarias                             |\n");
        printf("|        7.- Literatura y Ficcion                               |\n");
        printf("|        8.- Historia, Arte y Chiapas                           |\n");
        printf("-----------------------------------------------------------------\n");
        scanf("%d", &opCategoria);
        if (opCategoria < 1 || opCategoria > 8)
        {
            printf("Esa opción no esta dentro de los parametros\n");
        }
    } while (!(opCategoria >= 1 && opCategoria <= 8));

    switch (opCategoria)
    {
    case 1: strcpy(CategoriaLibro, "Medicina y Salud"); break;
    case 2: strcpy(CategoriaLibro, "Derecho y Ciencias Sociales"); break;
    case 3: strcpy(CategoriaLibro, "Contaduria y Administracion"); break;
    case 4: strcpy(CategoriaLibro, "Ingenieria y Sistemas"); break;
    case 5: strcpy(CategoriaLibro, "Humanidades y Pedagogia"); break;
    case 6: strcpy(CategoriaLibro, "Ciencias Agropecuarias"); break;
    case 7: strcpy(CategoriaLibro, "Literatura y Ficcion"); break;
    case 8: strcpy(CategoriaLibro, "Historia, Arte y Chiapas"); break;
    }

    do
    {
        printf(">Ingresa el titulo del libro\n");
        scanf(" %99[^\n]", TituloLibro);
        if (strlen(TituloLibro) == 0)
        {
            printf("Debes llenar este campo si quieres continuar\n");
        }
    } while (!(strlen(TituloLibro) > 0));

    do
    {
        printf(">Ingresa el nombre del autor\n");
        scanf(" %99[^\n]", AutorLibro);
        if (strlen(AutorLibro) == 0)
        {
            printf("Debes llenar este campo si quieres continuar\n");
        }
    } while (!(strlen(AutorLibro) > 0));

    do
    {
        printf(">Cuantas copias de este libro hay\n");
        scanf("%d", &CantCopias);
        if (CantCopias <= 0)
        {
            printf("Debe haber minimo una copia de este libro\n");
        }
    } while (!(CantCopias > 0));

    printf("-----------------------------------------------------------------\n");
    printf("|          Numero Copias          |             Id              |\n");
    printf("-----------------------------------------------------------------\n");
    
    for (x = 0; x < CantCopias; x++)
    {
        contCategoria[opCategoria]++;
        LibrosID = (opCategoria * 1000) + contCategoria[opCategoria];
        idLibros[totalLibros] = LibrosID;
        strcpy(titulos[totalLibros], TituloLibro);
        strcpy(autores[totalLibros], AutorLibro);
        strcpy(categoria[totalLibros], CategoriaLibro);
        libroDisponible[totalLibros] = Verdadero;
        
        printf("|                %d                |             %d              |\n", x + 1, LibrosID);
        totalLibros++;
    }
    printf("-----------------------------------------------------------------\n");
    printf("|Se registraron %d copias con exito.                             |\n", CantCopias);
    printf("-----------------------------------------------------------------\n");
}

void ModificarLibros()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Libros                   |\n");
    printf("|                                     > Modificar Libros        |\n");
    printf("-----------------------------------------------------------------\n");
}

void EliminarLibros()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Libros                   |\n");
    printf("|                                      > Eliminar Libros        |\n");
    printf("-----------------------------------------------------------------\n");
}

void BuscarLibros()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Libros                   |\n");
    printf("|                                        > Buscar Libros        |\n");
    printf("-----------------------------------------------------------------\n");
}

void ConsultarDisponibilidad()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Libros                   |\n");
    printf("|                                     > Consultar Disponibilidad|\n");
    printf("-----------------------------------------------------------------\n");
}

void ClasificarCategoria()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Libros                   |\n");
    printf("|                                  > Clasificar por Categoria   |\n");
    printf("-----------------------------------------------------------------\n");
}

// PRESTAMOS/DEVOLUCIONES
void RegistrarPrestamo()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                     Prestamos/Devoluciones                    |\n");
    printf("|                                > Registrar Prestamo           |\n");
    printf("-----------------------------------------------------------------\n");
}

void RegistrarDevolucion()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                     Prestamos/Devoluciones                    |\n");
    printf("|                               > Registrar Devolucion          |\n");
    printf("-----------------------------------------------------------------\n");
}

// REPORTES
void LibrosDisponibles()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                            Reportes                           |\n");
    printf("|                             > Libros Disponibles              |\n");
    printf("-----------------------------------------------------------------\n");
}

void LibrosPrestados()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                            Reportes                           |\n");
    printf("|                                > Libros Prestados             |\n");
    printf("-----------------------------------------------------------------\n");
}

void UsuariosResgistrados()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                            Reportes                           |\n");
    printf("|                             > Usuarios Registrados            |\n");
    printf("-----------------------------------------------------------------\n");
}

void HistorialPrestamos()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                            Reportes                           |\n");
    printf("|                             > Historial de Prestamos          |\n");
    printf("-----------------------------------------------------------------\n");
}

void HistorialDevoluciones()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                            Reportes                           |\n");
    printf("|                          > Historial de Devoluciones          |\n");
    printf("-----------------------------------------------------------------\n");
}

void LibrosMayorPrestamos()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                            Reportes                           |\n");
    printf("|                     > Libros con Mayor Numero de Prestamos    |\n");
    printf("-----------------------------------------------------------------\n");
}

void UsuariosPrestamosActivos()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                            Reportes                           |\n");
    printf("|                         > Usuarios con Prestamos Activos      |\n");
    printf("-----------------------------------------------------------------\n");
}