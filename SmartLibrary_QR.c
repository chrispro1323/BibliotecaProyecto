#include <stdio.h>
#include <string.h>
// Menús Principales
void UsuariosMenu();
void LibrosMenu();
void DevolucionesMenu();
void ReportesMenu();
// Menús Adminiatracion de usuarios
void RegistroUsu();
void ModificarInf();
void BuscarUsu();
void ConsultarUsuRegistrados();
void EliminarUsu();
// Menús Administracion de Libros
void RegistrarLibros();
void ModificarLibros();
void EliminarLibros();
void BuscarLibros();
void ConsultarDisponibilidad();
void ClasificarCategoria();
// Menús Prestamos/Devoluciones
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
        printf("|                          Smart Library                         |\n");
        printf("------------------------------------------------------------------\n");
        printf("|Bienvenido a nuestra biblioteca digital                         |\n");
        printf("|A continuacion puedes elegir la accion que deseas realizar:     |\n");
        printf("|                                                                |\n");
        printf("|        1.-                    Administracion de Usuarios.      |\n");
        printf("|        2.-                      Administracion de Libros.      |\n");
        printf("|        3.-                        Prestamos/Devoluciones.      |\n");
        printf("|        4.-                                      Reportes.      |\n");
        printf("|        0.-                        Salir de la biblioteca.      |\n");
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
        printf("|                    Administracion de Usuarios                  |\n");
        printf("-----------------------------------------------------------------\n");
        printf("|Bienvenido a nuestra biblioteca digital                         |\n");
        printf("|A continuacion puedes elegir la accion que deseas realizar:     |\n");
        printf("|                                                                |\n");
        printf("|        1.-                          Registro de Usuarios.      |\n");
        printf("|        2.-                         Modificar informacion.      |\n");
        printf("|        3.-                               Buscar Usuarios.      |\n");
        printf("|        4.-                          Usuarios registrados.      |\n");
        printf("|        5.-                             Eliminar Usuarios.      |\n");
        printf("|        0.-                        Salir de la biblioteca.      |\n");
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
        printf("|                    Administración de libros                    |\n");
        printf("-----------------------------------------------------------------\n");
        printf("|Bienvenido a nuestra biblioteca digital                         |\n");
        printf("|A continuacion puedes elegir la accion que deseas realizar:     |\n");
        printf("|                                                                |\n");
        printf("|        1.-                              Registrar libros.      |\n");
        printf("|        2.-                              Modificar libros.      |\n");
        printf("|        3.-                               Eliminar libros.      |\n");
        printf("|        4.-                                 Buscar libros.      |\n");
        printf("|        5.-                      Consultar disponibilidad.      |\n");
        printf("|        6.-               Clasificar libros por categoría.      |\n");
        printf("|        0.-                        Salir de la biblioteca.      |\n");
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
        printf("|                      Prestamos/Devoluciones.                   |\n");
        printf("-----------------------------------------------------------------\n");
        printf("|Bienvenido a nuestra biblioteca digital                         |\n");
        printf("|A continuacion puedes elegir la accion que deseas realizar:     |\n");
        printf("|                                                                |\n");
        printf("|        1.-                         Registrar un prestamo.      |\n");
        printf("|        2.-                      Registrar una devolucion.      |\n");
        printf("|        0.-                        Salir de la biblioteca.      |\n");
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
        printf("|                           Reportes                             |\n");
        printf("-----------------------------------------------------------------\n");
        printf("|Bienvenido a nuestra biblioteca digital                         |\n");
        printf("|A continuacion puedes elegir la accion que deseas realizar:     |\n");
        printf("|                                                                |\n");
        printf("|        1.-                            Libros disponibles.      |\n");
        printf("|        2.-                              Libros prestados.      |\n");
        printf("|        3.-                          Usuarios registrados.      |\n");
        printf("|        4.-                        Historial de préstamos.      |\n");
        printf("|        5.-                     Historial de devoluciones       |\n");
        printf("|        6.-          Libros con mayor número de préstamos.      |\n");
        printf("|        7.-                Usuarios con préstamos activos.      |\n");
        printf("|        0.-                        Salir de la biblioteca.      |\n");
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
    FILE *ReUsu;
    char Usuario[50], Usuariotxt[50];
    int Matricula, matriculatxt, matricularep;

    ReUsu = fopen("RegistroDeUsuario.txt", "a");
    if (ReUsu == NULL)
    {
        printf("Ha ocurrido un error.");
        return;
    }

    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Usuarios                  |\n");
    printf("|                                  > Registro de Usuario         |\n");
    printf("-----------------------------------------------------------------\n");
    printf("|Aqui podras crearte un usuario, utilizaras tu matricula.        |\n");
    printf("-----------------------------------------------------------------\n");
    printf("|                                                                |\n");

    do
    {
        printf("|> Ingresa tu nombre de usuario                                  |\n");
        printf("|>Sin espacios y solo 8 caracteres maximo:                       |\n");
        scanf("%s", Usuario);
        if (strlen(Usuario) > 8)
        {
            printf("|El nombre de usuario solo admite 8 caracteres                   |\n");
        }
    } while (strlen(Usuario) > 8);

    do
    {
        matricularep = 0;
        printf("|> Ingresa tu matricula (9 digitos):                             |\n");
        scanf("%d", &Matricula);
        if (Matricula > 999999999 || Matricula < 0)
        {
            printf("|La matricula debe ser de 9 digitos                             |\n");
        }

        ReUsu = fopen("RegistroDeUsuario.txt", "r");
        if (ReUsu != NULL)
        {
            while (fscanf(ReUsu, "%d|%s\n", &matriculatxt, Usuariotxt) == 2)
            {
                if (Matricula == matriculatxt)
                {
                    printf("Esta matricula ya existe\n");
                    matricularep = 1;
                    break;
                }
            }
            fclose(ReUsu);
        }

    } while (Matricula > 999999999 || Matricula < 0 || matricularep == 1);

    ReUsu = fopen("RegistroDeUsuario.txt", "a");
    if (ReUsu == NULL)
    {
        printf("Ha ocurrido un error.");
        return;
    }

    printf("-----------------------------------------------------------------\n");
    fprintf(ReUsu, "%d|%s\n", Matricula, Usuario);
    fclose(ReUsu);
    printf("|Usuario creado con exito.                                       |\n");
    printf("-----------------------------------------------------------------\n");
}
void ModificarInf()
{
    FILE *ReUsu, *ArchivoTemp;
    char UsuarioNuevo[50], Usuariotxt[50];
    int BuscarMatricula, Matriculatxt, Matriculaencontrada = 0;
    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Usuarios                  |\n");
    printf("|                                  > Modificar Infomacion        |\n");
    printf("-----------------------------------------------------------------\n");
    printf("|Aqui podras cambiar tu nombre de usurio, tu matricula es tu.    |\n");
    printf("|identificador unico                                             |\n");
    printf("-----------------------------------------------------------------\n");
    printf("|Ingresa tu matricula:                                           |\n");
    scanf("%d", &BuscarMatricula);
    ReUsu = fopen("RegistroDeUsuario.txt", "r");
    if (ReUsu == NULL)
    {
        printf("El registro esta vacio, puedes registrarte en Registro de Usuario.\n");
        return;
    }
    ArchivoTemp = fopen("ArchivoTemporal.txt", "w");
    if (ArchivoTemp == NULL)
    {
        printf("El archivo no se creo\n");
        fclose(ReUsu);
        return;
    }
    while (fscanf(ReUsu, "%d|%s\n", &Matriculatxt, Usuariotxt) == 2)
    {
        if (BuscarMatricula == Matriculatxt)
        {
            printf("|Matricula Encontrada                                            |\n");
            Matriculaencontrada = 1;
            do
            {
                printf("|> Ingresa el nuevo usuario                                      |\n");
                printf("|>Sin espacios y solo 8 caracteres maximo:                       |\n");
                scanf("%s", UsuarioNuevo);
                if (strlen(UsuarioNuevo) > 8)
                {
                    printf("|El nombre de usuario solo admite 8 caracteres                   |\n");
                }
            } while (strlen(UsuarioNuevo) > 8);
            fprintf(ArchivoTemp, "%d|%s\n", Matriculatxt, UsuarioNuevo);
        }
        else
        {
            fprintf(ArchivoTemp, "%d|%s\n", Matriculatxt, Usuariotxt);
        }
    }
    fclose(ReUsu);
    fclose(ArchivoTemp);
    if (Matriculaencontrada == 0)
    {
        printf("Esta matricula no existe");
        remove("ArchivoTemporal.txt");
        return;
    }
    remove("RegistroDeUsuario.txt");
    rename("ArchivoTemporal.txt", "RegistroDeUsuario.txt");
    printf("-----------------------------------------------------------------\n");
    printf("|Usuario cambiado con exito: %-8s                            |\n", UsuarioNuevo);
    printf("-----------------------------------------------------------------\n");
}
void BuscarUsu()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Usuarios                  |\n");
    printf("|                            > Buscar Usaurios                   |\n");
    printf("-----------------------------------------------------------------\n");
    printf("|Aqui podras buscar a un usuario miediante su matricula          |\n");
    printf("-----------------------------------------------------------------\n");
}
void ConsultarUsuRegistrados()
{
    FILE *ReUsu;
    char Usuario[50];
    int Matricula;
    ReUsu = fopen("RegistroDeUsuario.txt", "r");
    if (ReUsu == NULL)
    {
        printf("El registro esta vacio, puedes registrarte en Registro de Usuario.");
        return;
    }
    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Usuarios                  |\n");
    printf("|                            > Consultar Usuarios Registrados    |\n");
    printf("-----------------------------------------------------------------\n");
    printf("|              Matricula           |          Usuario            |\n");
    printf("-----------------------------------------------------------------\n");
    while (fscanf(ReUsu, "%d|%s\n", &Matricula, Usuario) == 2)
    {
        printf("|              %-9d           :          %-8s           |\n", Matricula, Usuario);
    }
    printf("-----------------------------------------------------------------\n");
    fclose(ReUsu);
}
void EliminarUsu()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Usuarios                  |\n");
    printf("|                            > Eliminar Usaurios                 |\n");
    printf("-----------------------------------------------------------------\n");
    printf("|Aqui podras eliminar a un usuario miediante su matricula        |\n");
    printf("-----------------------------------------------------------------\n");
}
// ADMINISTRACION DE LIBROS
void RegistrarLibros()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Libros                    |\n");
    printf("|                            > Registrar Libros                  |\n");
    printf("-----------------------------------------------------------------\n");
    printf("|Aqui podras registrar un libro, mediante su categoria, titulo   |\n");
    printf("|y autor                                                         |\n");
    printf("-----------------------------------------------------------------\n");
}
void ModificarLibros()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Libros                    |\n");
    printf("|                            > Modiicar Libros                  |\n");
    printf("-----------------------------------------------------------------\n");
}
void EliminarLibros()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Libros                     |\n");
    printf("|                            > Eliminar Libros                    |\n");
    printf("-----------------------------------------------------------------\n");
}
void BuscarLibros()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Libros                     |\n");
    printf("|                            > Buscar Libros                      |\n");
    printf("-----------------------------------------------------------------\n");
}
void ConsultarDisponibilidad()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Libros                     |\n");
    printf("|                            > Consultar disponibilidad           |\n");
    printf("-----------------------------------------------------------------\n");
}
void ClasificarCategoria()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Administracion de Libros                     |\n");
    printf("|                            > Consultar disponibilidad           |\n");
    printf("-----------------------------------------------------------------\n");
}
// PRESTAMOS/DEVOLUCIONES
void RegistrarPrestamo()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    PRESTAMOS/DEVOLUCIONES                       |\n");
    printf("|                            > Rgistrar Prestamos                 |\n");
    printf("-----------------------------------------------------------------\n");
}
void RegistrarDevolucion()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    PRESTAMOS/DEVOLUCIONES                       |\n");
    printf("|                            > Registrar Devoluciones             |\n");
    printf("-----------------------------------------------------------------\n");
}
// REPORTES
void LibrosDisponibles()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                     Reportes                                    |\n");
    printf("|                            > Libros Disponibles                 |\n");
    printf("-----------------------------------------------------------------\n");
}
void LibrosPrestados()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Reportes                                     |\n");
    printf("|                            > Libros Prestados                   |\n");
    printf("-----------------------------------------------------------------\n");
}
void UsuariosResgistrados()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Reportes                                     |\n");
    printf("|                            > Usuarios Registrados                  |\n");
    printf("-----------------------------------------------------------------\n");
}
void HistorialPrestamos()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Reportes                                     |\n");
    printf("|                            > Historial de Prestamos             |\n");
    printf("-----------------------------------------------------------------\n");
}
void HistorialDevoluciones()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Reportes                                     |\n");
    printf("|                            > Historial de Devolucones           |\n");
    printf("-----------------------------------------------------------------\n");
}
void LibrosMayorPrestamos()
{
    printf("-----------------------------------------------------------------\n");
    printf("|                    Reportes                                     |\n");
    printf("|                       > Libros con Mayor Historial de prestamos |\n");
    printf("-----------------------------------------------------------------\n");
}
void UsuariosPrestamosActivos()
{
     printf("-----------------------------------------------------------------\n");
    printf("|                    Reportes                                     |\n");
    printf("|                       > Usuarios con Prestamos Activos          |\n");
    printf("-----------------------------------------------------------------\n");

}